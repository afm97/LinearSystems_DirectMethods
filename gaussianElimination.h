void partialPivotingScale(unsigned originRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1]);

void gaussianElimination(unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1])
{
	double copiedMatrix[numberOfRows][numberOfRows];

	double pivot = 0;

	for (int i = 0; i < numberOfRows - 1; i++)
	{

		for (int j = i + 1; j < numberOfRows; j++)
		{
			partialPivotingScale(i, numberOfRows, matrix);

			pivot = matrix[j][i] / matrix[i][i];

			for (int k = 0; k < numberOfRows + 1; k++)
			{

				matrix[j][k] = matrix[j][k] - pivot * matrix[i][k];
			}
		}
	}
}
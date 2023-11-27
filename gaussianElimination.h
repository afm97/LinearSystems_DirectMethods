
void gaussianElimination(unsigned int rows, double matrix[rows][rows + 1])
{

	double pivot = 0;

	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = i + 1; j < rows; j++)
		{

			pivot = matrix[j][i] / matrix[i][i];

			for (int k = 0; k < rows + 1; k++)
			{

				matrix[j][k] = matrix[j][k] - pivot * matrix[i][k];
			}
		}
	}
}
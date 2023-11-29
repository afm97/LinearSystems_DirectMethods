
double maxValueOfLine(unsigned originRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1])
{
    double maxValue = 0.0;

    for (unsigned int j = 0; j < numberOfRows; j++)
    {
        if (fabs(matrix[originRow][j]) > maxValue)
        {
            maxValue = fabs(matrix[originRow][j]);
        }
    }

    return maxValue;
}
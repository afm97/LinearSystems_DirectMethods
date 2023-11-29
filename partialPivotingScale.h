
void partialPivotingScale(unsigned originRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1])
{
    double maxValueOfRow = maxValueOfLine(originRow, numberOfRows, matrix);
    double valueIndexArraySuport[2] = {matrix[originRow][originRow] / maxValueOfRow, originRow};
    double currentValue;

    for (unsigned int i = originRow + 1; i < numberOfRows; i++)
    {
        currentValue = fabs(matrix[i][originRow]) / maxValueOfRow;

        if (currentValue > valueIndexArraySuport[0])
        {
            valueIndexArraySuport[0] = currentValue;
            valueIndexArraySuport[1] = i;
        }
    }
    rowExchanger(originRow, valueIndexArraySuport[1], numberOfRows, matrix);
}
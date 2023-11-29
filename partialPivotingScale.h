
void partialPivotingScale(unsigned originRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1])
{

    double valueIndexArraySuport[2] = {matrix[originRow][originRow] / maxValueOfLine(originRow, numberOfRows, matrix), originRow};
    double currentValue;

    for (unsigned int i = originRow; i < numberOfRows; i++)
    {
        currentValue = fabs(matrix[i][originRow]) / maxValueOfLine(i, numberOfRows, matrix);

        if (currentValue > valueIndexArraySuport[0])
        {
            valueIndexArraySuport[0] = currentValue;
            valueIndexArraySuport[1] = i;
        }
    }
    rowExchanger(originRow, valueIndexArraySuport[1], numberOfRows, matrix);
}
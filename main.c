#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "printMatrix.h"
#include "gaussianElimination.h"
#include "regressiveSubstitution.h"
#include "rowExchanger.h"
#include "maxValueOfLine.h"
#include "partialPivotingScale.h"

int main()
{

    double matrix[][5] = {{1.19, 2.11, -100, 1, 1.12},
                          {14.2, -0.122, 12.2, -1, 3.44},
                          {0, 100, -99, 1, 2.15},
                          {15.3, 0.110, -13.1, -1, 4.16}};

    // sol:{x1 = 0.716, x2 = 0.0126, x3 = -0.0206, x4 = -1.18}

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    double solution[rows][1];

    printMatrix(rows, cols, matrix);
    gaussianElimination(rows, matrix);
    printf("---------------------------------------------------------------\n");
    printMatrix(rows, cols, matrix);
    regressiveSubstitution(rows, matrix, solution);
    printf("---------------------------------------------------------------\n");
    printMatrix(rows, 1, solution);
}
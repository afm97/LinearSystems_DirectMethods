#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "zeros.h"
#include "printMatrix.h"
#include "gaussianElimination.h"

int main()
{

    float data[][3] = {{0, -1, 1},
                       {2.5, 5.95915546, 0},
                       {5, 19.80464235, 0},
                       {7.5, 49.55234065, 0},
                       {10, 103.08082062, 2.14917705}};

    int rows = sizeof(data) / sizeof(data[0]);
    int cols = sizeof(data[0]) / sizeof(data[0][0]);

    float constants[rows][3];
}
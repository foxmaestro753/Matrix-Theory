#include <stdio.h>

void matrixmult(int n, int array1[][n], int array2[][n], int array3[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                array3[i][j] += (array1[i][k] * array2[k][j]);
            }
        }
    }
}

void matrixmult1(int n, int array1[][n], int array2[], int array3[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array3[i] = 0;
            for (int k = 0; k < n; k++)
            {
                array3[i] += (array1[i][k] * array2[k]);
            }
        }
    }
}

int main()
{

    int n;
    printf("Order: ");
    scanf("%d", &n);

    int matrixa[n][n];
    int matrixb[n][n];
    int matrixp[n][n];
    int matrixd[n];
    int matrixpd[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrixa[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrixb[i][j]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &matrixd[j]);
    }

    matrixmult(n, matrixa, matrixb, matrixp);
    matrixmult1(n, matrixa, matrixd, matrixpd);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrixp[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", matrixpd[j]);
    }
    printf("\n");
}
/*This program is to solve the linear equations using gauss Jordan  method*/

#include <stdio.h>

void gauss(void);

int main()
{
    gauss();
    return 0;
}

void gauss(void)
{
    int n, i, j, m;
    float a[25][25], b, c[20], sum;

    printf("Enter order of matrix(Enter number of rows in matrix): ");
    scanf("%d", &n);

    printf("Enter arugument matrix row wise: ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    /* Forward Elimination */
    for (j = 1; j <= n - 1; j++)  // pivot column
    {
        if (a[j][j] == 0.0f)
        {
            printf("Zero pivot encountered. (Pivoting not implemented)\n");
            return;
        }

        for (i = j + 1; i <= n; i++)  // only rows below the pivot
        {
            b = a[i][j] / a[j][j];   // factor

            for (m = j; m <= n + 1; m++)
            {
                a[i][m] = a[i][m] - b * a[j][m];
            }
        }
    }

    /* Back Substitution */
    c[n] = a[n][n + 1] / a[n][n];

    for (i = n - 1; i >= 1; i--)
    {
        sum = 0.0f;
        for (j = i + 1; j <= n; j++)
        {
            sum = sum + (a[i][j] * c[j]);
        }
        c[i] = (a[i][n + 1] - sum) / a[i][i];
    }

    printf("\nThe values of the variables are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x%d = %.3f\n", i, c[i]);
    }
}


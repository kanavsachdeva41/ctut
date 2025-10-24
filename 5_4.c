// WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility. //
#include <stdio.h>
void main()
{
    int i,j,m,n,p,q,k;

    printf("Enter order of matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter order of matrix 2: ");
    scanf("%d %d", &p, &q);

    int A[m][n], B[p][q];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ", &A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d ", &B[i][j]);
        }
        printf("\n");
    }

    printf("Matric A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    int result[m][q];

    if(n!=p)
    {
        printf("Multiplication is not possible.");
    }
    else
    {
        result[m][q];
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                result[i][j]=0;
            }
        }
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<n;k++)
                {
                    result[i][j]+=A[i][k]*B[k][j];
                }
            }
        }

        printf("Resultant matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
}
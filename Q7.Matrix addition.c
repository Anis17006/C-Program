//Adding two matrix and save into a different variable to print.
#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);    // taking the dimension of matrix from user
    int A[m][n],B[m][n],C[m][n];    // declaring the matrix variable with dimension
    for(i=0;i<m;i++)    // accessing the row of matrix
    {
        for(j=0;j<n;j++)    //accessing the column of matrix
        {
            scanf("%d",&A[i][j]);   //taking the input of matrix A
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&B[i][j]);   //taking the input of matrix B
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            C[i][j]=A[i][j]+B[i][j]; // adding matrix and save them in matrix C
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",C[i][j]); // printing matrix C
        }
        printf("\n"); // printing newline after each row
    }
    return 0;

}

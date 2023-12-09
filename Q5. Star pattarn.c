// Printing downward pyramid with stars.
#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);//taking input of the number of row.
    for(i=0;i<n;i++)
    {
        for(k=n-i;k<n;k++)//printing spaces of every line before stars.
        {
            printf(" ");
        }
        for(j=2*i;j<2*n-1;j++)//printing stars
        {
            printf("*");
        }
        printf("\n");//printing new line
    }
    return 0;
}

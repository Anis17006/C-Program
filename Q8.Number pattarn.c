// Printing downward pyramid with stars.
#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);//taking input of the number of row.
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)//printing spaces of every line before stars.
        {
            printf(" ");
        }
        for(k=0;k<2*i+1;k++)//printing numbers
        {
            if(i%2!=0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");//printing new line
    }
    return 0;
}


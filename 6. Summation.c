/* Find the sum of first and last digit of a number. The first line contains the total number of inputs.
Second line represents the integer number. */
#include<stdio.h>
int main()
{
    int T,N,i,l,m,n;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        l=N%10;
        n=N/10;
        while(n!=0)
        {
            m=n%10;
            n=n/10;
        }
        printf("Sum = %d\n",l+m);

    }
    return 0;
}


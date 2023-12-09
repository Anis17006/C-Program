#include<stdio.h>
int main()
{
    int t,n,i;
    printf("Enter total number of inputs: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Enter an integer: ");
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }

    }
    return 0;
}

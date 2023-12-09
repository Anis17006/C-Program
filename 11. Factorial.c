// Calculating factorial
#include<stdio.h>
int main()
{
    int T,i,n,j;
    long long f;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        f=1;// initializing factorial to 1
        scanf("%d",&n);//taking input of number
        for (j=2;j<=n;j++){
            f=f*j;// calculating factorial
        }
        printf("%lld\n",f);//printing the answer
    }
    return 0;
}

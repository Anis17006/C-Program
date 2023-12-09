#include<stdio.h>
int main()
{
    int T,i,n,j,c;
    long long f;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        c=0;
        f=1;// initializing factorial to 1
        scanf("%d",&n);//taking input of number
        for (j=2;j<=n;j++){
            f=f*j;// calculating factorial
        }
        while(f%10==0){
            c++;// counting the number of zero
            f=f/10;
        }
        printf("%d\n",c);
    }
    return 0;
}

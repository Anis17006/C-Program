//Identifying square numbers
#include<stdio.h>
int main()
{
    int T,n,sqr,i;
    scanf("%d",&T);
    for (i=0;i<T;i++)
    {
        scanf("%d",&n);
        sqr=sqrt(n);
        if(sqr*sqr==n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

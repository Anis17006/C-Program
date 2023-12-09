// Taking input of three integer and print them in ascending order
#include<stdio.h>
int main()
{
    int a,b,c,i,T,t;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b){
            // Swap a and b
           t=a;a=b;b=t;
        }
        if(c<a){
            // swap a and c
            t=a;a=c;c=t;
            //swap b and c
            t=b;b=c;c=t;
        }
        else if(c<b){
            // swap b and c
            t=b;b=c;c=t;
        }
        printf("Case %d: %d %d %d\n",i+1,a,b,c);
    }
    return 0;
}

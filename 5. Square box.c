/* Print square box. First line contain the number of inputs. Second line represents the length of the square.
Every square should separated by a line*/
#include<stdio.h>
int main()
{
    int T,N,i,j,k;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(k=0;k<N;k++)
        {
            for(j=0;j<N;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a,b,c[100],d;
    int i,j;
    int f=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        for(j=0;j<2*b;j++)
        {
            scanf("%d",&c[j]);
        }
        for(j=0;j<2*b;j++)
        {
            if((c[j]+c[j+1])%2!=0)
                j++;
                f=f+1;
        }
        if (f==b)
            printf("Yes\n");
        else
        {
            printf("No\n");
        }

    }
}

////


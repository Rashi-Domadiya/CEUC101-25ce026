#include<stdio.h>
void main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j==i || j==(2*n-i))
                printf("%d",j);
            else if(i==1)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}

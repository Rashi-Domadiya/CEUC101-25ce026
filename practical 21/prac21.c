#include<stdio.h>
int main()
{
    int arr[10];
    int pos=0,neg=0,even=0,odd=0;

    printf("Enter integers...........\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%d", &arr[i]);
        {
            if( arr[i]>0)
            {
                pos++;
            }
            else if(arr[i]<0)
            {
                neg++;
            }
        }
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
     }
 printf("total number of positive integers is%d\n",pos);
 printf("total number of negative integers is%d\n",neg);
 printf("total number of even integers is%d\n",even);
 printf("total number of odd integers is%d",odd);
}



#include<stdio.h>
int main()
{
    int Num;
    //Num=10;
    printf("Enter The Number:");
    scanf("%d",&Num);
    printf("This Is Number %d",Num);
    printf("The Size Of Integer Is: %d" ,sizeof(int));
    printf("The Size Of Character Is: %d" ,sizeof(char));
    printf("The Size Of Float Is: %d" ,sizeof(float));
    return 0;
}

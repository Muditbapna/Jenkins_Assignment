#include <stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    printf("Enter two number to add(Space Seperated)\n");
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    int ans=sum(num1,num2);
    printf("%d+%d=%d\n",num1,num2,ans);
    return 0;
}
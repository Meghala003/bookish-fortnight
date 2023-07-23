#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    int count=0;
    while(num >= 5)
    {
        count+=num/5;
        num/=5;
    }
    printf("%d",count);
}

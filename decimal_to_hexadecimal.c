#include<stdio.h>
void dectohex(int num);
int main()
{
    int num;
    scanf("%d",&num);
    dectohex(num);
}
void dectohex(int num)
{
    int temp=0,i=0;
    char hex[100];
    
    while(num!=0)
    {
        temp=num%16;
        if(temp<10)
        {
            hex[i++]=temp+48;
        }
        else
        {
            hex[i++]=temp+55;
        }
        num=num/16;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",hex[j]);
    }
}
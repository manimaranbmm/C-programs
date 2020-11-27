#include <stdio.h>
int main()
{
    int num, leftsum = 0, rightsum = 0, flag = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < num; i++)
    {
        leftsum = 0;
        rightsum = 0;
        for (int j = 0; j < i; j++)
        {
            leftsum = leftsum + arr[j];
        }
        for (int j = i + 1; j < num; j++)
        {
            rightsum = rightsum + arr[j];
        }
        if (leftsum == rightsum)
        {
            printf("%d", i);
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
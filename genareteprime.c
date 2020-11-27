#include <stdio.h>
#include<math.h>
int main()
{
    int num, flag = 0;
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        flag=0;
        for (int j = 3; j <=sqrt(num); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ",i);
        }
    }
}
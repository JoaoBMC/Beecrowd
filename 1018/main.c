#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, count100 = 0, count50 = 0, count20 = 0, count10 = 0, count5 = 0, count2 = 0, count1 = 0;
    scanf("%d", &x);
    printf("%d\n", x);
    while (x != 0)
    {
        if (x >= 100)
        {
            count100++;
            x = x - 100;
        }
        else if (x >= 50)
        {
            count50++;
            x = x - 50;
        }
        else if (x >= 20)
        {
            count20++;
            x = x - 20;
        }
        else if (x >= 10)
        {
            count10++;
            x = x - 10;
        }
        else if (x >= 5)
        {
            count5++;
            x = x - 5;
        }
        else if (x >= 2)
        {
            count2++;
            x = x - 2;
        }
        else if (x >= 1)
        {
            count1++;
            x = x - 1;
        }
    }
    printf("%d nota(s) de R$ 100,00\n", count100);
    printf("%d nota(s) de R$ 50,00\n", count50);
    printf("%d nota(s) de R$ 20,00\n", count20);
    printf("%d nota(s) de R$ 10,00\n", count10);
    printf("%d nota(s) de R$ 5,00\n", count5);
    printf("%d nota(s) de R$ 2,00\n", count2);
    printf("%d nota(s) de R$ 1,00\n", count1);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int x, h, m, s;
int main()
{
    scanf("%d", &x);
    s = x % 60;
    m = (x / 60) % 60;
    h = (x / 60) / 60;

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}

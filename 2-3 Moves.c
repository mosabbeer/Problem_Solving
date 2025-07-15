#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, p;
        scanf("%d", &n);
        if (n == 1)
            printf("2\n");
        else if (n > 1)
        {
            if (n % 3 == 0)
                p = n / 3;
            else if (n % 3 == 1)
            {
                n = n - 4;
                p = n / 3 + 2;
            }
            else if (n % 3 == 2)
                p = n / 3 + 1;
        }
        printf("%d\n", p);
    }
}

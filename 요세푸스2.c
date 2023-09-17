#include <stdio.h>
int main(void)
{
    int n = 0;
    int k = 0;
    int tmp = -1;
    int stack = 0;
    int re = 0;
    int arr[1000] = {0};
    scanf("%d %d", &n, &k);
    printf("<");
    for (;;)
    {
        if (tmp == n)
        {
            tmp = 0;
        }
        tmp++;
        if (arr[tmp - 1] == 1)
        {
            continue;
        }
        if (re == k)
        {
            re = 0;
            printf("%d", tmp);
            stack++;
            if (stack == n)
            {
                break;
            }
            else
            {
                printf(", ");
            }
            arr[tmp - 1] = 1;
        }
        re++;
    }
    printf(">");
}
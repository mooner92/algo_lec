#include <stdio.h>

int arr[1001] = {0};
int main()
{
    int n, p, cnt = 0, k = 0, l;
    scanf("%d %d", &n, &p);
    printf("<");
    for (; cnt != n;)
    {
        int q = 3;
        for (int i = 0; i < q; i++)
        {
            l = (k % 7 == 0) ? 7 : k % 7;
            if (!arr[l])
            {
                k++;
            }
            else
            {
                q++;
            }
        }
        l = (k % 7 == 0) ? 7 : k % 7;

        if (!arr[l])
        {
            arr[l] = 1;
            printf("%d", l);
            cnt++;
            if (cnt != n)
                printf(", ");
        }
    }
    printf(">");
}
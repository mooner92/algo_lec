#include <stdio.h>
int main()
{
    char alpha = 'A';
    int n;
    scanf("%d", &n);
    char ds[101][101];
    for (int i = 1; i <= n; i++)
    {
        for (int j = i, k = n; j <= n; j++, k--)
        {
            ds[j][k] = alpha++;
            if (alpha > 'Z')
                alpha = 'A';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (ds[i][j] >= 65 && ds[i][j] <= 90)
            {
                printf("%c ", ds[i][j]);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
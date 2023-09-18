#include <stdio.h>
int main()
{
    int n;
    char cs[101][101];
    char c = 'A';
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (c > 90)
                c -= 26;
            cs[j][i] = c++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", cs[i][j]);
        }
        printf("\n");
    }
}
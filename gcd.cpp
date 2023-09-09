#include <iostream>
using namespace std;

int rec(int a, int b)
{
    if (b == 0)
        return a;
    else
        return rec(b, a % b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    int k = rec(n, m);
    cout << k;
}
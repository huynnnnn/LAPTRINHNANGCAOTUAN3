#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n + 5], k;
    For(i, 1, n)
        cin >> a[i];
    cin >> k;
    int i = 1;
    while(a[i++] <= k);
    Forn(j, n + 1, i - 1)
        a[j] = a[j - 1];
    a[i - 1] = k;
    For(j, 1, n + 1)
        cout << setprecision(2) << fixed << a[j] << ' ';
}

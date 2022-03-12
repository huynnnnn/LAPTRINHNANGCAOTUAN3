#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n + 3];
    For(i, 1, n)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << a[1] <<' ';
    For(i, 2, n)
        if(a[i] != a[i - 1])
            cout << a[i] << ' ';
}

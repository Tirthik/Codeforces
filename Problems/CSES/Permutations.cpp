#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    //This is the exact same question as G_Special_Permutation from Codeforces
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n < 4)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            for (int i = n - 1; i >= 1; i -= 2)
            {
                cout << i << " ";
            }
            cout << "4 2 ";
            for (int i = 6; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = n; i >= 1; i -= 2)
            {
                cout << i << " ";
            }
            cout << "4 2 ";
            for (int i = 6; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) 
    {
        solve();
    }
}
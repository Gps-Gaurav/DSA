#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(a);

        // Iterate from left to right
        for (int i = 1; i < n; ++i)
        {
            b[i] = max(b[i], (a[i - 1] + 1) / 2 + (a[i] + 1) / 2);
        }

        // Iterate from right to left
        for (int i = n - 2; i >= 0; --i)
        {
            b[i] = max(b[i], (a[i + 1] + 1) / 2 + (a[i] + 1) / 2);
        }

        for (int i = 0; i < n; ++i)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

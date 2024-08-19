#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> l;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0;
        for (int i = l; i < n + 1; i = i + k)
        {
            ans = ans + arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}

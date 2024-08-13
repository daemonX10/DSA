#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int top_sum, left_sum;
    int topleft_sum = 0;

    // Example condition to avoid syntax error
    if (n == 0 || m == 0)
    {
        return 0;
    }

    // Additional logic can be added here

    return 0;
}
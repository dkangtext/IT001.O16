#include <bits/stdc++.h>

using namespace std;

#define MAX 100

int main()
{
    float a[MAX][MAX];
    int n;
    cin >> n >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}

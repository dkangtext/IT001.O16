#include <iostream>
using namespace std;
int TichUoc(int n)
{
    int s = 1;
    for( int i = 1; i<=n ; i++)
    {
        if( n % i == 0 )
        {
            s *= i;
        }
    }
    cout << s;
    return 0;
}
int main()
{
    int n; 
    cin >> n;
    TichUoc(n);
    return 0;
}
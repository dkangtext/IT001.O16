#include <iostream>
using namespace std;
int TichUocSoLe(int n)
{
    int s = 1;
    for( int i = 1; i<=n ; i++)
    {
        if( n % i == 0 )
        {
            if(i%2 != 0)
            {
                s *= i;
            }
        }
    }
    cout << s;
    return 0;
}
int main()
{
    int n; 
    cin >> n;
    TichUocSoLe(n);
    return 0;
}
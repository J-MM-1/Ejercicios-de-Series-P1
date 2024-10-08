#include <iostream>
using namespace std; 

int main()
{
    int i, n, a = 1, b = 0, c;
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        c = a + b;
        a = b;
        b = c;
        cout << a << ",";
    }

    return 0;
}
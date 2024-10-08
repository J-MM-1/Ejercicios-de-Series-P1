#include <iostream>
using namespace std; 

int main()
{
    int i, n, num = 1;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << 1 << ",";
        }
        if (i % 2 == 0)
        {
            num += 2;
            cout << num << ",";
        }
    }
    return 0;
}
#include <iostream>
using namespace std; 

int main()
{
    int i, n, num;
    num = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        num += 4;
        cout << num << ",";
    }
    return 0;
}
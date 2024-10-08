#include <iostream>
using namespace std;  

int main()
{
    int i, n, num, it;
    num = 1;
    it = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << num << ",";
        num += it;
        it++;
    }
    return 0;
}
#include <iostream>
using namespace std;  

int main()
{
    int i, n, num = 0, it = 2;;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << num << ",";
        num += it;
        it += 2;
    }
    return 0;
}
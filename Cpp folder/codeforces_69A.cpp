#include <iostream>
using namespace std;

int main()
{
    int t_cases;
    cin >> t_cases;
    int x = 0, y = 0, z = 0;
    while (t_cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x == y == z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
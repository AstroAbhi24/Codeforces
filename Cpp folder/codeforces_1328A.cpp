#include <iostream>
using namespace std;

int main()
{
    int t_cases;
    cin >> t_cases;
    while (t_cases--)
    {
        int n1, n2, c = 0;
        cin >> n1 >> n2;
        if (n1 >= n2 && n1%n2!=0)
        {
            cout << n2-(n1 % n2) << endl;
        }
        else if(n1%n2==0){
            cout << 0 << endl;
        }
        else
        {
            cout << n2 - n1 << endl;
        }
    }

    return 0;
}
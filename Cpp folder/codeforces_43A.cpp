#include <iostream>
// #include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    int t_cases;
    cin >> t_cases;
    unordered_map<string, int> unm;
    for(int i=0;i<t_cases;i++))
    {
        string a;
        cin >> a;
        if (unm.find(a) == unm.end())
        {
            unm[a] = 0;
        }
        else
        {
            unm[a]++;
        }
    }
    
    return 0;
}
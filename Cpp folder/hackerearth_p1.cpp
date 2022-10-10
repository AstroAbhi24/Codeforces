#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    int t_cases,a,b,c;
    cin >> t_cases;
    t_cases++;
    while(t_cases--){
        cin >> a >> b >> c;
        cout << a*(b-c) << endl;
    }

return 0;
}
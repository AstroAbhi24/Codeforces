#include <iostream>
// #include <bits/stdc++.h>
// #include <>
#include <string.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
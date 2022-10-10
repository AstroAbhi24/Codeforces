#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int size = (int)sizeof(a)/sizeof(a[0]);
    int x=0;
    while(true){
        if (x==size){
            break;
        }
        if (&a[x]=="."){
            x++;
            cout << "0" << "";
        }
        else if (&a[x]=="-"){
            if (&a[x+1]=="."){
                cout << "1" << "";
            }
            else if (&a[x+1]=="-"){
                cout << "2" << "";
            }
            x+=2;
        }
    }

return 0;
}
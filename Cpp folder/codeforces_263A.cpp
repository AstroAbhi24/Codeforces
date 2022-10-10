#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
            if (arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    x = 2-x;
    y = 2-y;
    cout << (((x<0)?-x:x) + ((y<0)?-y:y)) << endl ; 
return 0;
}
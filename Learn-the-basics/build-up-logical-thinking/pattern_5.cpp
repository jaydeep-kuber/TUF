#include<bits/stdc++.h>

using namespace std;

/*
* * * * *
* * * *
* * * 
* * 
* 
*/

void pattern_5(int n){
    for(int i=0 ; i < n; i++){
        for(int j = n ; j > i ; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    pattern_5(5);
    return 0;
}
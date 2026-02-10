#include<bits/stdc++.h>

using namespace std;

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1 
*/

void pattern_5(int n){
    for(int i=0 ; i < n; i++){
        for(int j = n ; j > i ; j--){
            cout << (n-j)+1 << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern_5(5);
    return 0;
}
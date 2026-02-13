#include<bits/stdc++.h>
using namespace std;
/*

1      1
12    21
123  321
12344321

space = n*2-2
*/
void pattern_12(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i;j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    pattern_12(5);
    return 0;
}
#include<bits/stdc++.h>

using namespace std;
/*
*******
 *****
  ***
   *
*/
void pattern_8(int n){
    for(int i=0; i<n; i++){ // Loop for rows 
        for (int j = 0; j < i ; j++) {
                cout << " ";
        }
        
        // Start loop
        for (int s = 0; s <  2 * n - (2 * i + 1); s++){
           cout << "*";
        }
        cout << endl;

        for (int j = 0; j < i; j++) {
                cout << " ";
        }
    }
}

int main(){
    pattern_8(5);
    return 0;
}
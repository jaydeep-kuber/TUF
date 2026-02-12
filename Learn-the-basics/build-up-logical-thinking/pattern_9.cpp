#include<bits/stdc++.h>

using namespace std;

/*
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/
void pattern_9(int n){
    for(int i=0; i<n; i++){ // Loop for rows 
        for (int j = 0; j <n - i - 1; j++) {
                cout << " ";
            }

            // Print stars (2*i + 1 stars)
        for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }

            // Print trailing spaces (optional, same count as leading spaces)
        for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
        cout << endl;
    }

    for(int i=0; i<n; i++){ // Loop for rows 
        for (int j = 0; j < i ; j++) {
                cout << " ";
        }
        
        // Start loop
        for (int s = 0; s <  2 * n - (2 * i + 1); s++){
           cout << "*";
        }

        for (int j = 0; j < i; j++) {
                cout << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern_9(5);
    return 0;
}
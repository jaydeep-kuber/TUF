#include<bits/stdc++.h>
using namespace std;

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
*/

void pattern_11(int n){
    int flip = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) flip = 1;
        else flip = 0;
        for (int j = 0; j <=i; j++)
        {
            cout << flip << " ";
            flip = 1 - flip;   
        }
        cout << endl;
    }
    
}

int main(){
    pattern_11(5);
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
* * * * * 
* * * * *
* * * * *
* * * * *
* * * * *
*/
void pattern_1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    pattern_1(5);
    return 0;
}

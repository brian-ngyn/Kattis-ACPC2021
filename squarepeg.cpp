// https://acpc21d2.kattis.com/problems/squarepeg

#include <bits/stdc++.h>
using namespace std;

int main(){

    float l;
    float r;
    cin >> l >> r;
    float d = 2 * r;

    if ((d/sqrt(2)) > l ){
        cout << "fits" << endl;
    }
    else if ((d/sqrt(2)) < l){
        cout << "nope" << endl;
    }
 
    return 0;
}
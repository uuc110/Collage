#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, H, F, T;
    cin >> n;


        H = n/100;
        n = n-H*100;
        F = n/50;
        n = n-F*50;
        T= n/10;
        cout << "Hundred: " << H << endl;
        cout << "Fifty: " << F << endl;
        cout << "Tens: " << T << endl;

    return 0;
}
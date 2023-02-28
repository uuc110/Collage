#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "how many semester you have? ";
    cin >> n;
    float arr[n] = {0};
    float CGPA = 0;
    for (int i = 1; i <= n; ++i) {
        cout << "Enter your " << i << " semster CPGA" << endl;
        cin >> arr[i];
        CGPA = CGPA + arr[i];
    }
    cout << CGPA << endl;
    cout << "CGPA of 8th Sem " << (float)CGPA / (float)n;

    switch (CGPA) {
        case 0 <= CGPA || CGPA >= 3.5:
            cout << "Grade: D" <<endl;
        default:

            cout << "Fail hai tu Fail" <<endl;
    }



    return 0;
}
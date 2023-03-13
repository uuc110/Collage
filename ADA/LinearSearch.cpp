#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {3,52,5,127,74,2};
    int target;
    cout << "Enter the value to be searched\n";
    cin >> target;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        if(target == arr[i]){
            cout << "Value is at Index " << i << endl;
            break;
        }else{
            cout << "Value is not found \n";
        }
    }

    return 0;
}
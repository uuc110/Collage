//Question: write a Program that will scan a number N and then output the sum of the power from 1 to N. this, if the
// input is 4, then output should be 288 because 1+4+27+256 = 288 [1,2,3,4]

#include <bits/stdc++.h>
using namespace std;

int Exponential(int n){
    int sum = 1;
    for (int i = 0; i < n; ++i) {
        sum *= n;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

//    Approach 1: Using STL
    int STLsum = 0;
    for (int i = 0; i < n; ++i) {
        STLsum += pow(arr[i],i+1);
    }

    cout <<"Using STL Method: " << STLsum << endl;

//    Approach 2: Using Normal Method
    int sum =0;
    for (int i = 0; i < n; ++i) {
        sum += Exponential(i+1);
    }

    cout << "Using Funtion: " << sum << endl;

//    Approach 3: using double Loop
    int FinalSum = 0;
    cout << "=============================" << endl;6
    for (int i = 1; i <= n; ++i) {
        int ExpoSum = 1;
        for (int j = 0; j < i; ++j) {
            ExpoSum *= i;
        }
        FinalSum += ExpoSum;
    }

    cout <<"Double Loop Method: " << FinalSum;

    return 0;
}
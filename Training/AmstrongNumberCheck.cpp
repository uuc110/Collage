/* Question: Check the given number is Amstrong or not
 * Date: 01/03/2023
 * Amstrong Number: 153 = 1^3 + 5^3 + 3^3
 * Amstrong Number: 370 = 3^3 + 7^3 + 0^3
*/

#include <bits/stdc++.h>
using namespace std;

int GetTheLength(int n){
    int count =0;
    while (n !=0) {
        n = n / 10;
        count++;
    }
    return count;

}

int main(){
    cout << "Enter the Palindrome Number" << endl;
    int n;
    cin >> n;
    int size = GetTheLength(n);
    string N = to_string(n);
    int i=0, j = size;
    bool Check = true;

    for (int k=0; k < size;k++) {
        if (N[i] == N[j-1]) {
            i++;
            j--;
        } else {
            Check = false;
            break;
        }
    }

    cout << "Its Palindron? ";
    if(Check){
        cout << "True" <<endl;
    }else{
        cout << "False";
    }

    return 0;
}
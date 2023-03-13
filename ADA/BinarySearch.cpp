#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target, int size){
    int start = 0, end = size,mid=0;
    while(start <= end){
        int mid = start + (end - start ) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return mid;
}

void conquer(vector<int> &arr, int start, int mid, int end, vector<int> &tempArr){
    int i1 = start;
    int i2 = mid+1;
    int index=0;

    while(i1<= mid && i2 <= end){
        if(arr[i1] <= arr[i2]){
            tempArr[index++] = arr[i1++];
        }else{
            tempArr[index++] = arr[i2++];
        }
    }

    while(i1 <= mid){
        tempArr[index++] = arr[i1++];
    }

    while(i2 <= end){
        tempArr[index++] = arr[i2++];
    }

    for (int i = 0; i < index; ++i) {
        arr[start+i] = tempArr[i];
    }
}

void divide(vector<int> &arr,int start, int end, vector<int> &tempArr){
    if(start >= end){
        return;
    }

    int mid = start + (end - start)/2;
    divide(arr, start, mid, tempArr);
    divide(arr, mid+1,end, tempArr);
    conquer(arr, start, mid, end, tempArr);
}

vector<int> sortArray(vector<int> &arr){
    vector<int> result(arr.size());
    divide(arr, 0, arr.size()-1, result);
    return result;
}

int main() {
    vector<int> arr = {5,2,3,1};
    vector<int> result = sortArray(arr);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    int target = 3;
    int n = result.size();
    int ans = BinarySearch(arr, target,n);
    cout << "is At index" << ans;

}
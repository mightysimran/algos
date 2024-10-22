#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1){
            i++;
        }

        while (arr[j] > pivot && j >= low + 1){
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high){
    if (low < high){
        int p = partition(arr, low, high);
        qs(arr, low, p - 1);
        qs(arr, p + 1, high);
    }
}

vector<int> solve(vector<int> arr){
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main(){
    vector<int> arr = {5,4,3,2,1};

    arr = solve(arr);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";

    return 0;
}
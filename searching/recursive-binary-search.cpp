#include <bits/stdc++.h>
using namespace std;

int recursive_binary_search(const vector<int>& arr, int x, int left, int right){
    if(left > right){
        return -1;
    }

    int mid = (left+right)/2;

    if(arr[mid] == x){
        return mid;
    }
    else{
        if(arr[mid] < x){
            return recursive_binary_search(arr, x, mid+1, right);
        }
        else{
            return recursive_binary_search(arr, x, left, mid-1);
        }
    }
}

int main(){
    return 0;
}
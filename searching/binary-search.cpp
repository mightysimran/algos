#include <bits/stdc++.h>
using namespace std;

int binary_search(const vector<int>& arr, int x){
    int left = 0;
    int right = arr.size()-1;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid] == x){
            return mid;
        } 
        else{
            if(arr[mid] < x){
                left = mid+1;
            }
            else if (arr[mid] > x){
                right = mid-1;
            }
        }   
    }
    return -1;
}

int main(){
    return 0;
}
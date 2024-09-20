#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int value){
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==value){
            return mid;
        }
        else{
            if(arr[mid]<value){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    return 0;
}
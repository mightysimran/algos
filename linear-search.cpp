#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int value){
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}

int main(){
    return 0;
}
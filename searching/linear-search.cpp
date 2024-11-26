#include <bits/stdc++.h>
using namespace std;

int linear_search(const vector<int>& arr, int x){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    return 0;
}
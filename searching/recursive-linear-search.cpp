#include <bits/stdc++.h>
using namespace std;

int recursive_linear_search(const vector<int>& arr, int x, int ix){
    if(ix >= arr.size()){
        return -1;
    }
    if(arr[ix] == x){
        return ix;
    }
    return recursive_linear_search(arr, x, ix+1);
}

int main(){
    return 0;
}
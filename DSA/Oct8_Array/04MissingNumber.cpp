#include<iostream>
using namespace std;
#include<vector>

int missing(vector<int>arr){
    int n = arr.size();
    int misEle = -1;
    for (int i = 0 ;i < n-1 ; i++){
        if (arr[i] != arr[i+1]-1){
            misEle = arr[i]+1;
        }
    }
    return misEle;
}

int main(){
    vector<int>arr = {1,3};
    cout<<missing(arr);
}
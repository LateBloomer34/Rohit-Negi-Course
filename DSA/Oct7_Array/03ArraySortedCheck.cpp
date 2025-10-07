#include<iostream>
using namespace std;
#include<vector>

bool sortedCheck(vector<int>arr){
    int n = arr.size();

    for (int i = 0 ; i < n-1 ; i++){
        if (arr[i+1]<arr[i]){
            return false;
        }
        
    }
    return true;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7};
    if (sortedCheck(arr)){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
}
#include<iostream>
#include<vector>
using namespace std;

int dupli(vector<int>arr){
    int n = arr.size();
    int j = 0 ;

    if (arr.empty()){
        return 0;
    }

    for (int i = 1 ; i < n ; i++){
        if (arr[i]!=arr[j]){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0 ; i <=j ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

int main (){
    vector<int>arr = {1,2,2,2,3,3};
    dupli(arr);
}
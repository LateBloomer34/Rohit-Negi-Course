#include<iostream>
#include<vector>
using namespace std;

int lRotate( vector<int>arr,  int d){
    int n = arr.size();
    d= d%n; // edge case -> if d is greater than n

    if (n==0){
        return 0;
    }


    vector<int>temp = {};
    for (int i = 0 ; i < d ; i++){
        temp.push_back(arr[i]);
    }
    for (int i = d ; i < n ; i++){
        arr[i-d]=arr[i];
    }
    for (int i = 0 ; i< d ; i++){
        arr[n-d+i] = temp[i];
    }

    for (int i =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8,8,9};
    int d = 0;
    lRotate(arr, d);
}
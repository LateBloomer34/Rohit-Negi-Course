#include<iostream>
using namespace std;

int appear(vector<int>arr){
    int n = arr.size();
    int num = 0;

    for (int i = 0; i < n ; i++){
        num = num^arr[i];
    }
    return num;
}

int main (){
    vector<int>arr = {4,1,2,1,2};
    cout<<appear(arr);
}
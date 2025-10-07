#include<iostream>
using namespace std;
#include<vector>

int largest(vector<int>arr){
    int n = arr.size();
    int lar = INT_MIN;

    for (int i = 0 ; i < n ; i++){
        if (arr[i]>lar){
            lar = arr[i];
        }
    }
    return lar;
}


int main (){
    vector<int>arr = {2,3,5,9,4,3};
    cout<<largest(arr);
}
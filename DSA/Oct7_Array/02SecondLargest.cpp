#include<iostream>
#include<vector>
using namespace std;

int secLar(vector<int>arr){
    int n = arr.size();
    int lar = INT_MIN;
    int secLar = INT_MIN;


    for (int i = 0 ; i< n ; i++){
        if (arr[i]>lar){
            secLar = lar;
            lar = arr[i];
        }
        if (arr[i]>secLar && arr[i]<lar){
            secLar=arr[i];
        }
    }
    return secLar;
}

int main (){
    vector<int>arr = {2,6,5,3,4,1,7,9,5,8};
    cout<<secLar(arr);
}
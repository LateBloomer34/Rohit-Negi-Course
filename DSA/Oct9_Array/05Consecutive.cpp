#include<iostream>
#include<vector>
using namespace std;

int conse(vector<int>arr){
    int n = arr.size();
    int ele = 0 ;
    int maxEle = 0 ;

    for (int i = 0 ; i< n ; i++){
        if (arr[i]== 1){
            ele++;
            maxEle = max(ele, maxEle);
        }
        else{
            ele = 0;
        }
    }
    return maxEle;
}

int main (){
    vector<int>arr = {1,1,1,1, 0, 1, 1, 0, 1};
    cout<<conse(arr);
}
#include<iostream>
using namespace std;
#include<vector>

int uni(vector<int>arr1 , vector<int>arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    // if unsorted array- sort the array first
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int>result;
    int i = 0; 
    int j = 0 ; 

    while(i<n1 && j <n2){
        if (arr1[i]<=arr2[j]){
            if (result.empty() || result.back()!=arr1[i]){
            result.push_back(arr1[i]);
            }
            i++;
        }
    else if (arr2[j]<arr1[i]){
        if (result.empty() || result.back()!=arr2[j]){
            result.push_back(arr2[j]);
        }
        j++;
    }
    }
    while(i<n1){
        if (result.empty() || result.back()!=arr1[i]){
            result.push_back(arr1[i]);
            }
            i++;
    }
     while(j<n2){
        if (result.empty() || result.back()!=arr2[j]){
            result.push_back(arr2[j]);
            }
            j++;
    }
    

    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

int main (){
    vector<int>arr1 = {1,2,3,4,5,6};  
    vector<int>arr2 = {2,3,4,4,5};
    uni(arr1 , arr2);
}
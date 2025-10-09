#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>arr , int k ){
    int n = arr.size();
    int sum = 0 ; 
    int maxSubLen = 0;
    
    int left = 0 ;
    int right  = 0;


   while(right<n){
        sum =  sum+ arr[right];

         if (sum == k ){
        maxSubLen = max (maxSubLen, right-left+1);
        } 

        while(left <= right && sum>k ){
        sum = sum - arr[left];
        left++;
        }

       
        right++;
    }
    return maxSubLen;
}

int main (){
    vector<int>arr = {5,2,3};
    int k = 5;
    cout<<subarraySum(arr , k);
}
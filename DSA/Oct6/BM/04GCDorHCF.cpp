#include<iostream>
using namespace std;

// brute approach
/*
int gcd(int n1 , int n2){
    int hcf = 1;
    if (n1<=0 || n2<=0){
        hcf = 1;
    }
    
    for (int i = 1; i<= min(n1, n2) ; i++){
        if (n1%i==0 && n2%i==0){
            hcf = i;
        }
    }
    return hcf;
}
*/


// optimal approach

int gcd (int n1 , int n2){
    if (n1==0){
        return n2;
    }
    if (n2==0){
        return n1;
    }
    while(n1!=0 && n2 !=0){
        if (n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
    }
    return max(n1, n2);
}




int main (){
    int n1 = 36;
    int n2 = -12;
    cout<<gcd(n1 , n2);
}
#include<iostream>
using namespace std;

int divisor(int num){

    for (int i = 1 ; i <= num/2 ; i++ ){
        if (num%i==0){
            cout<<i<<" ";
        }
    }
    return num;
}

int main (){
    int num = 36;
    cout<<divisor(num);
}
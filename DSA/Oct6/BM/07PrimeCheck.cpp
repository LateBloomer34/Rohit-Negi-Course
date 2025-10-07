#include<iostream>
using namespace std;

// number which divide by 1 and itself only is calle dperime number 
// number lesser or equal than 1 (either 1. or zero or negative is not the prime number )

bool primeCheck (int num){
    if (num<=1){
        return false;
    }
    for (int i = 2 ; i*i <= num ; i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int main (){
    int num = 2;
    if (primeCheck(num )){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
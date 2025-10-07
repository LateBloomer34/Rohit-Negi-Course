#include<iostream>
using namespace std;

int rev (int num){
    int rem = 0 ;
    int revNum = 0;
    int isNeg = false;

    if (num<0){
        isNeg = true;
        num = -num;
    }
   
    while(num>0){
        rem = num % 10;
        num = num/10;
        revNum = revNum*10+rem;
    }

    if (isNeg==true){
        revNum = -revNum;
    }
    return revNum;
}

int main (){
    int num = -52395; // interprator treats num as octal number.
    cout<<rev(num);
}
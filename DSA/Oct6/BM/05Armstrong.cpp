#include<iostream>
using namespace std;

bool arm (int num){
    if (num<0){
        return false;
    }
    if (num==0){
        return true;
    }
    int ogNum = num;
    int count = 0 ;
    int num1 = num;
    
    while(num>0){
        count++;
        num = num/10;
    }
    int armNum = 0 ;
    while(num1>0){
        int rem = num1%10;
        num1 = num1/10;
        armNum = armNum+pow(rem , count);
    }
    if (ogNum == armNum){
        return true;
    }
    return false;
}

int main (){
    int num = 152;
    if (arm(num)){
        cout<<"arm";
    }
    else{
        cout<<"not arm";
    };
}
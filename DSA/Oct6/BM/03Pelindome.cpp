#include<iostream>
using namespace std;

bool peli (int num){
    int ogNum = num;
    int revNum = 0;
    if (num<0){
        return false;
    }
    while(num>0){
        int rem = num%10;
        revNum = revNum*10+rem;
        num = num/10;
    }

    if (revNum==ogNum){
        return true;
    }
    return false;
}


int main (){
    int num = -121;
   if( peli(num)){
    cout<<"peli";
   }
   else{
    cout<<"not peli";
   };
}


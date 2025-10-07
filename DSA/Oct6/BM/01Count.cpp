#include<iostream>
using namespace std;

int countDig (int num ){
        int count = 0 ;
    if (num==0){
        return 1;
    }
    if (num<0){
        num = -num;
    }
    
        while(num>0){
            count++;
            num = num/10;
        }

        return count;
} 

int main (){
    int num = 1000000000;
   cout<< countDig(num);
}
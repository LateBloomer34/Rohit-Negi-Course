#include<iostream>
using namespace std;

int pattern (int n ){
    int count =1;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j <=i ; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}

int main (){
    int n = 5;
    pattern(n);
}
#include<iostream>
using namespace std;

int pattern (int n ){
    for(int i = 0  ; i<n ; i++){
        for (int j = 1 ; j<=n-i ;j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }

    return 0;
}

int main (){
    int n = 5;
    pattern(n);
}
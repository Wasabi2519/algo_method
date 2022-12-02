#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B; //入力を整数型として受け取る
    
    if(A % 10 < B % 10){
        cout << A << endl;
    }
    else{
        cout << B << endl;
    }
}
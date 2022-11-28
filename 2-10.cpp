#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S; //入力を文字列型として受け取る
    int N, M;
    cin >> N >> M;
    char tmp = S[N-1];
    S[N-1] = S[M-1];
    S[M-1] = tmp;
    cout << S << endl;

}
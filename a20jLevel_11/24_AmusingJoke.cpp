//https://codeforces.com/problemset/problem/141/A
//Amusing Joke


#include<iostream>
#include<conio.h>

using namespace std;

void func(){
    string a,b,c;
    cin>>a>>b>>c;
    int A[26]={0};
    for(int i=0;i<a.length();i++){
        A[(int)a[i] - 65]++;
    }
    for(int i=0;i<b.length();i++){
        A[(int)b[i] - 65]++;
    }
    for(int i=0;i<c.length();i++){
        A[(int)c[i] - 65]--;
    }
    for(int i=0;i<26;i++){
        if(A[i] != 0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
        
return;
}
int main(){
    func();

return 0;
}
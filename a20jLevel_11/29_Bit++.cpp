//https://codeforces.com/problemset/problem/282/A
//Bit++

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,x=0;
    cin>>n;
    string *A = new string [n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        if(A[i][1]=='+')   
            x++;
        else if(A[i][1]=='-')
            x--;
    }
    cout<<x;

return;
}
int main(){
    func();

return 0;
}
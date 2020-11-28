//https://codeforces.com/problemset/problem/275/A
//Lights Out

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    // int A[n][n], B[n][n], I[n][n];
    // for n=3;
    int n=3;
    int A[3][3]={0}, B[3][3]={0},I[3][3];
    for(int i=0;i<n; i++){
        for(int j=0;j<n;j++){
            cin>>I[i][j];
        }
    }
    
    for(int i=0;i<n; i++){
        for(int j=0;j<n;j++){
            B[i][j] += I[i][j];
            if(i>0) 
                B[i-1][j] +=I[i][j];
            if(i<n-1) 
                B[i+1][j] +=I[i][j];
            if(j>0) 
                B[i][j-1] += I[i][j];
            if(j<n-1) 
                B[i][j+1] += I[i][j];
        }
    }
    for(int i=0;i<n; i++){
        for(int j=0;j<n;j++){
            if(B[i][j]%2 == 0){
                A[i][j] = 1; //toggle
            }
            cout<<A[i][j];
        }
        cout<<endl;
    }
return;
}

int main(){
    func();

return 0;
}
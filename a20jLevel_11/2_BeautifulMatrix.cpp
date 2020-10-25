//https://codeforces.com/problemset/problem/263/A
//Beautiful Matrix

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int i,j,x,y,res;
    int A[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>A[i][j];
            if(A[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }
    res = abs(x-3) + abs(y-3);
    cout<<res;
return;
}

int main(){
    func();

return 0;
}
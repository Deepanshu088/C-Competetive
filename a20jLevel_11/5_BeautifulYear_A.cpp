//https://codeforces.com/problemset/problem/271/A
//Beautiful Year


#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    
    int x,A[10]={0},y,i,j;
    cin>>x;
        int flag=1;
    do{
        ++x;
        y=x;
        for(i=0;i<4;i++){
            if(A[y%10] != 0){
                flag =0;
                break;
            }
            A[y%10]++;
            y=y/10;
        }
    }while (!flag);
    cout<<x;
    

return;
}

int main(){
    func();

return 0;
}
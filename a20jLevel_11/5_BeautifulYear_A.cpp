//https://codeforces.com/problemset/problem/271/A
//Beautiful Year

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    
    int x;
    cin>>x;
    int flag=1;
    while(flag){
        int A[10]={0};
        ++x;
        int y=x;
        flag=0;
        for(int i=0;i<4;i++){
            flag = 0;
            if(A[y % 10] != 0){
                flag =1;
                break;
            }
            A[y % 10]++;
            y=y / 10;
        }
    };
    cout<<x;

return;
}

int main(){
    func();

return 0;
}
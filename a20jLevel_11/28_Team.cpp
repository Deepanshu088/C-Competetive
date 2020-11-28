//https://codeforces.com/problemset/problem/231/A
//Team

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,count=0;
    cin>>n;
    bool **A = new bool*[3] {0};
    for(int i = 0; i < 3; i++)
        A[i] = new bool[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>A[j][i];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum = sum + A[j][i];
        }
        if(sum >= 2)
            count++;
    }
    cout<<count;
return;
}
int main(){
    func();

return 0;
}
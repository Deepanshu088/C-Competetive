//https://codeforces.com/problemset/problem/116/A
//Tram

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,c=0,max=0;
    cin>>n;
    // unsigned int *A = new unsigned int[n];
    // unsigned int *B = new unsigned int[n];
    unsigned int A[1000], B[1000];
    for(int i=0;i<n;i++){
        cin>>A[i]>>B[i];
    }
    for(int i=0;i<n;i++){
        c+= -A[i]+ B[i];
        if(c>max)
            max=c;
    }
    cout<<max;
return;
}
int main(){
    func();

return 0;
}
//https://codeforces.com/problemset/problem/69/A

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n;
    cin>>n;
    cout<<endl;
    if(n<1 || n>100)
    {
        cout<<"Invalid input\n";
        return;
    }
    int A[100][3];
    int i=0,sumx=0,sumy=0,sumz=0;
    for(i=0;i<n;i++){
        cin>>A[i][0]>>A[i][1]>>A[i][2];

        sumx = sumx + A[i][0];
        sumy = sumy + A[i][1];
        sumz = sumz + A[i][2];
    }
    if((sumx==0)&&(sumy==0)&&(sumz==0)){
        cout<<"Yes";
    }else
    {
        cout<<"No";
    }
    

return;
}

int main(){
    func();

return 0;
}
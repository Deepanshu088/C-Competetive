// The number of positions
// https://codeforces.com/problemset/problem/124/A

#include<iostream>
using namespace std;

void func(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n-b>a)
        cout<<b+1;
    else
        cout<<n-a;
    
return;
}
int main(){
    func();

return 0;
}
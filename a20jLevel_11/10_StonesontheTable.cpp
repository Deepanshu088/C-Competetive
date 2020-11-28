// https://codeforces.com/problemset/problem/266/A
// Stones on the Table

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    string s;
    int c=0,n;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
        if(s[i]==s[i+1])
            c++;
    cout<<c;
return;
}
int main(){
    func();

return 0;
}
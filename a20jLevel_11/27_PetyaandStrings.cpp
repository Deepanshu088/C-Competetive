//https://codeforces.com/problemset/problem/112/A
//Petya and Strings

#include<iostream>
#include<conio.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void func(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::toupper);
    transform(b.begin(),b.end(),b.begin(),::toupper);
    cout<<a.compare(b);       
return;
}
int main(){
    func();

return 0;
}
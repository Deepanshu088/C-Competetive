// Translation
// https://codeforces.com/problemset/problem/41/A
#include<iostream>
// #include<bits/stdc++.h> 
#include<string>
using namespace std;

// void func(){
//     string s,t,ns;
//     cin>>s>>t;
//     reverse(s.begin(),s.end());
//     if(s==t)
//         cout<<"YES";
//     else
//         cout<<"NO";

// return;
// }
void func2(){
    string s,t,ns;
    cin>>s>>t;
    int x = s.length();
    for(int i=0;i<(x/2);i++){
        char y = s[i];
        s[i]=s[x-i-1];
        s[x-i-1] = y;
    }
    if(s==t)
        cout<<"YES";
    else
        cout<<"NO";


return;
}

int main(){
    func2();

return 0;
}
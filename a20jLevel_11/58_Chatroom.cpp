// Chat room
// https://codeforces.com/problemset/problem/58/A

#include<iostream>
#include<string.h>
using namespace std;

void func(){
    string s, a="hello";
    cin>>s;
    int j=0;
    for(int i=0;i<s.length() && j<5;i++)
        if(s[i] == a[j])
            j++;
    if(j==5){
        cout<<"YES";
        return;
    }
    cout<<"NO";

    
return;
}
int main(){
    func();

return 0;
}
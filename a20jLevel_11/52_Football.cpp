// Football
// https://codeforces.com/problemset/problem/96/A

#include<iostream>
using namespace std;

void func(){
    int c=1,i=1;
    string s;
    cin>>s;
    while (i<s.length() && c<7)
    {
        if(s[i] == s[i-1])
            c++;
        else
            c=1;
        i++;
    }
    if(c>=7)
        cout<<"YES";
    else
        cout<<"NO";
return;
}
int main(){
    func();

return 0;
}
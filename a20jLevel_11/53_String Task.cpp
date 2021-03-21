// String Task
// https://codeforces.com/problemset/problem/118/A

#include<iostream>
using namespace std;

void func(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y')
            continue;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            cout<<"."<<char(s[i]+32);
        else
            cout<<"."<<s[i];
    }
    
return;
}
int main(){
    func();

return 0;
}
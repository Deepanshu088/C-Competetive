// Dubstep
// https://codeforces.com/problemset/problem/208/A

#include<iostream>
#include<string.h>
using namespace std;

void func(){
    string s,sub;
    sub="WUB";
    cin>>s;
    int pos=0;
    while (1)
    {   pos = s.find(sub,0);
        if(pos==-1)
            break;
        s = s.replace(pos,3," ");
    }
    cout<<s;
return;
}
int main(){
    func();

return 0;
}
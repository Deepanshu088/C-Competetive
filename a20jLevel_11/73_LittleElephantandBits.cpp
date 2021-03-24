// Little Elephant and Bits
// https://codeforces.com/problemset/problem/258/A

#include<iostream>
using namespace std;

int main(){
    bool flag=0;
    int l;
    string x;
    cin>>x;
    l=x.length();
    for(int i=0;i<l-1;i++)
        if(x[i]=='0' && !flag)
            flag=1;
        else
            printf("%c",x[i]);

    if(flag)
        cout<<x[l-1];


return 0;
}
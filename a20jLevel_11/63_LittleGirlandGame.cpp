// Little Girl and Game
// https://codeforces.com/problemset/problem/276/B


#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int A[26]={0},c=0,l=s.length();
    for(int i=0;i<l;i++)
        A[s[i]-97]++;

    for(int i=0;i<26;i++)
        if(A[i]%2)
            c++;
    if(!c){
        cout<<"First";
    }else if(c%2)
        cout<<"First";
    else
        cout<<"Second";

return 0;
}
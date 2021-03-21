// k-String
// https://codeforces.com/problemset/problem/219/A

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int k,A[26]={0},B[26]={0},n;
    string s;
    cin>>k>>s;
    n= s.length();
    if(n%k != 0){
        cout<<"-1";
        exit(0);
    }
    for(int i=0;i<n;i++){
        A[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        B[i] = A[i]/k;
        if(A[i]%k != 0){
            cout<<"-1";
            exit(0);
        }
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<26;j++){
            int t = B[j];
            while(t > 0){
                cout<<char(j + 97);
                t--;
            }
        }
    }
return 0;
}
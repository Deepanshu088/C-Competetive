// Letter
// https://codeforces.com/problemset/problem/43/B

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int A[125]={0},B[125]={0};
    for(int i=0;i<s1.length();i++){
        if(s1[i]==' ')
            continue;
        else
            A[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]==' ')
            continue;
        else
            B[s2[i]]++;
    }
    for(int i=65;i<123;i++){
        // cout<<char(i)<<" "<<A[i]<<" "<<B[i]<<endl;
        if(B[i] > A[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
        

    

return 0;
}
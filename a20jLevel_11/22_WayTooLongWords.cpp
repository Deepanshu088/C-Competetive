//https://codeforces.com/problemset/problem/71/A
//Way Too Long Words

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void func(){
    unsigned int n;
    string A[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        int length = A[i].length();
        if(length > 10){
            A[i]= A[i][0]+ to_string(length-2) + A[i][length-1];
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }

return;
}
int main(){
    func();

return 0;
}
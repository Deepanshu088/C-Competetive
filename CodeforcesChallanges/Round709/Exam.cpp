// Exam
// https://codeforces.com/contest/1483/problem/F


#include<iostream>
#include<string>
using namespace std;


void func(){
    int n,c=0;
    cin>>n;
    string *s = new string[n+1];
    int *A = new int[n+1]{0};
    int *B = new int[n+1]{0};

    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                continue;
            }
            int x = s[i].find(s[j]);
            if(x!= -1){
                if(A[j]){
                    if(s[i].length() < s[A[j]].length() ){
                        A[j]=i;
                    } else if(s[i].length() == s[A[j]].length()){
                        B[j]++;
                        A[j]=0;
                    }
                    cout<<i<<"  "<<A[i]<<endl;
                }else{
                    A[j]=i;
                }
            }
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        if(A[i]){
            c++;
        }else if(B[i]){
            c += B[i] +1;
        }
    }
    cout<<c;



return;
}

int main(){
    func();

return 0;
}
// Jeff and Periods
// https://codeforces.com/problemset/problem/352/B

#include<iostream>
using namespace std;

void func(){
    int n;
    int *A = new int[n];
    int A[100500]= {0};
    for(int i=0;i<n;i++)
        cin>>A[i];
    
    for(int i=0;i<n;i++){
        int d1=0,d2=0;
        if(A[i]== -1)
            continue;

        for(int j=i+1;j<n;j++){
            if(A[i]==-1)
                continue;

            if(A[i]==A[j]){
                if(d1){

                }else{
                    d1=j-i;
                    A[j]=-1;
                }
            }
        }
    }

    
return;
}
int main(){
    func();

return 0;
}
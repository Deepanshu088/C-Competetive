// Xenia and Divisors
// https://codeforces.com/problemset/problem/342/A

#include<iostream>
using namespace std;

void func(){
    int n;
    cin>>n;
    int x,A[8]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        A[x]++;
    }
    n=n/3;
    if(A[5] || A[7]){
        cout<<-1;
        return;
    }
    if((A[1]==n)&&(A[2]+A[3]==n)&&(A[4]+A[6]==n)&&(A[2]>=A[4])&&A[6]>=A[3]){
        while (A[4]  && A[2] && A[1])
        {
            cout<<"1 2 4\n";
            A[1]--;
            A[2]--;
            A[4]--;
        }
        while (A[2] && A[6] && A[1])
        {
            cout<<"1 2 6\n";
            A[1]--;
            A[2]--;
            A[6]--;        
        }
        while (A[3] && A[1] && A[6])
        {
            cout<<"1 3 6\n";
            A[1]--;
            A[3]--;
            A[6]--;
        }
    }else
    cout<<-1;
    
return;
}
int main(){
    func();

return 0;
}
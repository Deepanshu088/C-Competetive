// Guess the Number
// https://www.codechef.com/COOK127C/problems/GUESSIT

#include<iostream>
#include<string>
using namespace std;


void func(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){

        int k,n,l,r;
        cin>>n>>k;
        int *A=new int[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        int min=INT16_MAX;
        for(int i=0;i<n-k+1;i++){
            int minn=0;
            for(int x=i;x<k+i;x++){
                cout<<x<<" "<<A[x]<<endl;
                minn += A[x];
            }
            if(min > minn){
                min = minn;
            }
            cout<<endl;
        }
        cout<<endl<<endl;


    }
return;
}

int main(){
    func();

return 0;
}
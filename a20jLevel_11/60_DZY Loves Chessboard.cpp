// DZY Loves Chessboard
// https://codeforces.com/problemset/problem/445/A

#include<iostream>
using namespace std;

void func(){
    int n,m;
    cin>>n>>m;
    char A[100][100];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>A[i][j];
            
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='.'){
                if((i+j)%2 == 1 )
                    A[i][j]='W';
                else
                    A[i][j]='B';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<A[i][j];
        cout<<endl;
    }


    
return;
}
int main(){
    func();

return 0;
}
// Jeff and Periods
// https://codeforces.com/problemset/problem/352/B

#include<iostream>
using namespace std;

void func(){
    unsigned int n,m,t;
    cin>>t;

    for(int j=0;j<t;j++){
        cin>>n>>m;
        unsigned int** A = new unsigned int*[m]; 
        int *C = new int[n];
  
        for (int i = 0; i < m; i++) {
            A[i] = new unsigned int[n+1]; 
        } 
        for(int i=0;i<m;i++){
            cin>>A[i][0];
            for(int k=1;k<=A[i][0];k++){
                cin>>A[i][k];
            }
        }
        for(int i=0;i<m;i++){
            for(int k=0;k<n;k++){
                cout<<A[i][k]<<" ";
            }
            cout<<endl;
        }
        

        cout<<endl;











    }
    
return;
}
int main(){
    func();

return 0;
}
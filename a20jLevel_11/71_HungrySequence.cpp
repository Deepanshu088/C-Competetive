// Hungry Sequence
// https://codeforces.com/problemset/problem/327/B

#include<iostream>
using namespace std;

int main(){
    unsigned int n,A[100001]={0},l=3,c=100001;
    scanf("%d",&n);
    
    // A[0]=2;
    // A[1]=3;
    // A[2]=5;
    // // n=10;
    // int i=A[l-1]+1,j=0;
    // while (l<n)
    // {
    //     if(j==l){
    //         if(A[j-1]*2 > i){
    //             A[l]=i;
    //             l++;
    //             continue;
    //         }
    //     }
    //     if(i % A[j]==0){
    //         i++;
    //         j=0;
    //     }   
    //     else{
    //         j++;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     printf("%d",A[i]);
    //     if(i<n-1)
    //         printf(" ");
    // }

    // another way bhcdisinck

    for(int i=0;i<n;i++){
        printf("%d",i+100000);
        if(i<n-1)
            printf(" ");
    }

return 0;
}
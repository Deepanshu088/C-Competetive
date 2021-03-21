#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

void DisplayArray(int A[], int n){
    for(int i=0; i< n ;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return;
}

void Merge(int A[], int l,int m, int h){
    int n1 =m-l+1;
    int n2 =h-m;
    int *L = new int[n1];
    int *R = new int[n2];
    int i,j,k;

    for(i=0; i<n1;i++)
        L[i]= A[l+i];
    for(j=0; j<n2; j++)
        R[j]= A[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j< n2){
        if(L[i] <= R[j])
            A[k++]=L[i++];
        else
            A[k++]=R[j++];
    }
    while(i<n1){
        A[k++]= L[i++];
    }
    while(j<n2){
        A[k++]= R[j++];
    }
    delete[] L;
    delete[] R;
return;
}
void MergeSortRecursively(int A[],int l,int h){
    if(l<h){
        int m = floor((l+h)/2);
        MergeSortRecursively(A,l,m);
        MergeSortRecursively(A,m+1,h);
        Merge(A,l,m,h);
    }
return;
}

int main(){
    int A[10]={6,8,4,2,5,9,1,0,3,7};
    int B[10]={10,80,30,90,40,50,70,20,60,130};
    int n=10;

    DisplayArray(B,n);
    MergeSortRecursively(B,0,n);
    DisplayArray(B,n);


return 0;
}
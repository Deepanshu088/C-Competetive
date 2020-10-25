#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

int FindMaxFromArray(int A[],int n){
    int max = A[0];
    for(int i=1; i<n;i++){
        if(A[i]>max)
            max=A[i];
    }
return max;
}
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void DisplayArray(int A[], int n){
    for(int i=0; i< n ;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return;
}
void BubbleSort(int A[],int n){
    int i,j;
    for(i =0; i<n-1; i++){
        int flag =0;
        for(j=0; j<n-i-1; j++){
            if( A[j] > A[j+1] )
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(!flag)
            break;
    }
    return;
}
void InsertionInSortedArray(int A[],int *n, int x){
    int i= *n;
    while((x < A[i-1])&& i>0){
        A[i] = A[i-1];
        i--;
    }
    A[i] =x;
    *n = *n + 1;
    return;
}
void SelectionSort(int A[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        k=i;
        for(j=i;j<n;j++){
            if(A[j]<A[k])
                k=j;
        }
        swap(A[i],A[k]);
    }
}
void QuickSortRecursively(int A[],int l, int h){
    int p= A[l], i=l, j=h;
    if(l < h){
        while (i<j){
            do{++i;}while (p>A[i]);
            do{j--;}while (p<A[j]);
            if(i>=j)
                break;
            swap(A[i],A[j]);
        }
        swap(A[l],A[j]);
        QuickSortRecursively(A,l,j);
        QuickSortRecursively(A,j+1,h);
    }
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
void MergeSortIteratively(int A[], int n){
    int l,h,i;
    for(i=2;i<=n;i=i*2){
        for(int j= 0; j+i-1< n; j=j+i){
            h = j+i-1;
            l = j;
            int m = floor((l+h)/2);
            Merge(A,l,m,h);
        }
    }
    if(i/2 < n){
        Merge(A,0,h,n-1);
    }
return;
}
void CountSort(int A[],int n){
    int max = FindMaxFromArray(A,n);
    int *B = new int[max+1] {0};
    for(int i=0; i< n ;i++)
        B[A[i]]++;
    for(int i=0,j=0; i< max+1; i++)
        while(B[i] != 0){
            A[j++]=i;
            B[i]--;
        }
    B[100]=256;
    cout<<B[100]<<endl;
    delete[] B;
    cout<<B[100]<<endl;
return;
}


int main(){
    int A[10]={6,8,4,2,5,9,1,0,3,-3};
    int B[10]={10,80,30,90,40,50,70,20,60,130};
    int n=10;

    DisplayArray(B,n);
    CountSort(B,n);
    DisplayArray(B,n);

return 0;
}
// Jeff and Periods
// https://codeforces.com/problemset/problem/352/B

#include<iostream>
#include<algorithm>
using namespace std;

void func(){
    int n,c=0;
    cin>>n;
    int A[100001];
    int B[100001] = {0};
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    for(int i=0;i<n;i++){
        int d1=0,p=-1,flag=1;
        if(A[i]== -1)
            continue;
        

        for(int j=i+1;j<n;j++){
            if(A[i]==-1)
                continue;

            if(A[i]==A[j]){
                A[j]=-1;
                if(!flag)
                    continue;
                else if(d1){
                    if((j-p)==d1)
                        p=j;
                    else
                        flag=0;
                }else{
                    d1=j-i;
                    p=j;
                }
            }
        }

        if(flag){
            c++;
            if(!d1)
                B[A[i]]=-5;
            else
                B[A[i]] = d1;
        }else{
            A[i] = -1;
        }
    }
    // sort(A,A+n);
    cout<<c<<endl;

    // for(int i = n-c; i<n;i++)
    //     printf("%d %d\n",A[i],(B[A[i]]==-5 ? 0:B[A[i]]));

    for(int i=0;i<100001;i++)
        if(B[i])
            printf("%d %d\n",i,(B[i]==-5 ? 0:B[i]));

    
return;
}

void func2(){
    int n,A[100001],B[100001]={0},C[100001]={0},c=0;
    bool P[100001]={0};

    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    for(int i=0;i<100001;i++)
        C[i]=-1;

    for(int i=0;i<n;i++){
        if(C[A[i]]>-1){
            if(!P[A[i]])
                continue;
                
            int d1 = i-C[A[i]];
            if(B[A[i]]==-5){
                B[A[i]]=d1;
                C[A[i]]=i;
                continue;
            }
            if(B[A[i]]==d1){
                C[A[i]] = i;
                continue;
            }else{
                P[A[i]]=0;
            }
        }else{
            C[A[i]] =i;
            B[A[i]] =-5;
            P[A[i]] = 1;
        }


    }
    for(int i=0;i<100001;i++)
        c += P[i];


    printf("%d\n",c);
    for(int i=1;i<100001;i++)
        if(P[i])
            printf("%d %d\n",i,(B[i]==-5 ? 0:B[i]));


return;
}



int main(){
    func2();

return 0;
}
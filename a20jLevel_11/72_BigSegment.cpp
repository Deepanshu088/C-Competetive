// Big Segment
// https://codeforces.com/problemset/problem/242/B

#include<iostream>
#include<algorithm>
using namespace std;

struct P{
    public:
    int L,R,p;
    P(){
        p=0;
        L=0;
        R=0;
    }
};
bool factor(P x,P y){
    return((x.R - x.L) > (y.R - y.L));
}

int main(){
    unsigned int n;
    scanf("%d",&n);
    P A[100001];

    scanf("%d%d",&A[0].L,&A[0].R);
    unsigned int max= A[0].R,min=A[0].L,md =A[0].R-A[0].L;
    A[0].p=1;
    for(int i=1;i<n;i++){
        scanf("%d%d",&A[i].L,&A[i].R);
        A[i].p=i+1;
        if(min > A[i].L)
            min= A[i].L;
        if(max < A[i].R)
            max= A[i].R;
        if(md < A[i].R-A[i].L)
            md= A[i].R-A[i].L;
    }
    for(int i=0;i<n;i++)
        if(md == A[i].R-A[i].L && max==A[i].R && min==A[i].L){
            cout<<A[i].p;
            return 0;
        }
    cout<<-1;




return 0;
}
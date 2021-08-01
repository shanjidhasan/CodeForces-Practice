#include<bits/stdc++.h>
using namespace std;
void Rolling_Hash(char a[],char p[])
{
    int n1=0,n2=0,l1,l2,base = 10,d=1,f,x=0,i,j;
    l1 = strlen(a);
    l2 = strlen(p);
    for(i=1;i<l2;i++)d*=base;
    for(i=0;i<l2;i++){
        n2 = n2*base + p[i];
        n1 = n1*base + a[i];
    }
    for(i=0;i<l1-l2+1;i++){
        if(n1 == n2){
            f = 0;
            for(j=0;j<l2;j++){
                if(a[i+j]!=p[j]){
                    f = 1;
                    break;
                }
            }
            if(f==0){
                cout<<i<<" ";
            }
        }
        n1 = (n1-a[i]*d)*base+a[i+l2];
    }
}
int main(){
    char a[100],b[100];
    cin>>a>>b;
    Rolling_Hash(a,b);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int Rolling_Hash(char a[],char p[])
{
    int n1=0,n2=0,l1,l2,base = 10,d=1,f,x=0,l=1,g,k,h;
    l1 = strlen(a);
    l2 = strlen(p);
    int i,j;
    for(l=1; l<=l2; l++){
        for(k=0; k<l2; k++){
            d = 1; h = 0;
            n1 = 0; n2 = 0;
            for(i=1; i<l; i++)
                d*=base;
            for(i=0; i<l; i++){
                n2 = n2*base + p[i+k];
                n1 = n1*base + a[i];
            }
            for(i=0; i<l1-l+1; i++){
                if(n1 == n2){
                    f = 0;
                    for(j=k; j<l; j++){
                        if(a[i+j]!=p[j]){
                            f = 1;
                            break;
                        }
                    }
                }
                if(f==0){
                    x = l;
                    h = 1;
                    f = 1;
                    break;
                }
                n1 = (n1-(a[i])*d)*base+a[i+l];
            }
            if(h==1)
                break;
        }
    }
    return x;
}
int main(){
    char a[1000],b[1000];
    cin>>a>>b;
    if(strlen(a)>strlen(b))
        cout<<Rolling_Hash(a,b)<<endl;
    else
        cout<<Rolling_Hash(b,a)<<endl;
    return 0;
}


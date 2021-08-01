#include<stdio.h>
int main()
{
    int k,n,i,A[100],temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d" ,&A[i]);
    for(i=2;i<=n;i++){
    for(k=i;k>=1;k--){
        if(A[k]<A[k-1])


    {
        temp=A[k];
        A[k]=A[k-1];
        A[k-1]=temp;
        }
    }for(i=1;i<=n;i++)
    printf("%d " ,A[i]);
      }
    return 0;
}


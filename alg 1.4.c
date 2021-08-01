#include<stdio.h>
int main(){
int i,n,LOC=1,MAX,k=1;
int a[100];
printf("Enter total number of elements:");
scanf("%d",&n);
for(i=0;i<n;++i)
scanf("%d",&a[i]);
MAX = a[1];
while(k<n){
if(MAX<a[k]){
LOC = k;
MAX = a[k];
}
k++;
}
printf("LOC = %d\t Max = %d",LOC,MAX);
return 0;
}

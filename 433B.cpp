#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree1[mx * 3];
int tree2[mx * 3];
/*void print2(int n)
{
    for(long long i = 1;i<2*n+1;i++)
        cout<<tree2[i]<< " ";
    cout<<endl;
}
void print1(int n)
{
    for(long long i = 1;i<2*n+1;i++)
        cout<<tree1[i]<< " ";
    cout<<endl;
}*/
void create_sum1(int N, int b, int e)
{
    if (b == e)
    {
        tree1[N] = arr[b];
        return;
    }
    int L = N * 2;
    int R = N * 2 + 1;
    int M = (b + e) / 2;
    create_sum1(L, b, M);
    create_sum1(R, M + 1, e);
    tree1[N] = tree1[L] + tree1[R];
}
void create_sum2(int N, int b, int e)
{
    if (b == e)
    {
        tree2[N] = arr[b];
        return;
    }
    int L = N * 2;
    int R = N * 2 + 1;
    int M = (b + e) / 2;
    create_sum2(L, b, M);
    create_sum2(R, M + 1, e);
    tree2[N] = tree2[L] + tree2[R];
}
long long sum2(int N, int b, int e, int i, int j)
{//cout<<69<<endl;
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree2[N];
    long long L = N * 2;
    long long R = N * 2 + 1;
    long long M = (b + e) / 2;
    long long p1 = sum2(L, b, M, i, j);
    long long p2 = sum2(R, M + 1, e, i, j);    //cout<<p1<<"    "<<p2<<endl;
    return p1 + p2;
}
long long sum1(int N, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree1[N];
    long long L = N * 2;
    long long R = N * 2 + 1;
    long long M = (b + e) / 2;
    long long p1 = sum1(L, b, M, i, j);
    long long p2 = sum1(R, M + 1, e, i, j);

    return p1 + p2;
}
int main()
{
    int n,x,y,a,b;
    cin >> n;
    for(int i = 1; i <=n ; i++)
        cin>> arr[i];
    create_sum1(1,1,n);
    //quicksort(arr,1,n);
    sort(arr+1,arr+n+1);
    create_sum2(1,1,n);
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>y>>a>>b;
        if(y == 1)
        {
            //print1(n);
            cout<<sum1(1,1,n,a,b)<<"\n";
        }
        else
        {
            //print2(n);
            cout<<sum2(1,1,n,a,b)<<"\n";
        }

    }
    return 0;
}


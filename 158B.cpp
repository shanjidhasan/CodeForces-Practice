#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    sort(s,s+n);
    int i=0,j=n-1,f=0;
    while(1){
        if(i==j){
            f++;
            break;
        }
        if(i+1==j){
            if(s[i]+s[j]<=4){
                f++;
                break;
            }
            else{
                f+=2;
                break;
            }
        }
        else if(s[i]+s[j]==4){
            f++;
            i++;
            j--;
        }
        else if(s[i]+s[j]==3){
            if(s[i+1]==1){
                if(i+2==j){
                    f++;
                    break;
                }
                else{
                i+=2;
                j--;
                f++;
                }
            }
            else{
                i++;
                j--;
                f++;
            }
        }
        else if(s[i]+s[j]==2){
            if(i+2==j){
                if(s[i+1]<=2){
                    f++;
                    break;
                }
                else{
                    i++;
                    j--;
                    f++;
                }
            }
            else if(i+3==j){
                if(s[i+1]==1&&s[j-1]==1){
                    f++;
                    break;
                }
                else if(s[i+1]<=2){
                    i+=2;
                    j--;
                    f++;
                }
                else if(s[j-1]<=2){
                    i++;
                    j-=2;
                    f++;
                }
                else{
                    i++;
                    j--;
                    f++;
                }
            }
            else{
                if(s[i+1]==1&&s[j-1]==1){
                    f++;
                    i+=2;
                    j-=2;
                }
                else if(s[i+1]<=2){
                    i+=2;
                    j--;
                    f++;
                }
                else if(s[j-1]<=2){
                    i++;
                    j-=2;
                    f++;
                }
            }
        }
        else{
            j--;
            f++;
        }
    }
    cout<<f<<endl;
    return 0;
}

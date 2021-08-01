#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,p,f,cnts,cntw,s,w,mini,ans,a,b;
    cin>>t;
    while(t--){a = 1;b = 1;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        if(s>p && w>p){
            if(s<=w){
                ans = f/s;
            }
            else{
                ans = f/w;
            }
        }
        else if(s>f && w>f){
            if(s<=w){
                ans = p/s;
            }
            else{
                ans = p/w;
            }
        }
        else if(s*cnts+w*cntw<=p ||s*cnts+w*cntw<=f){
            ans = cnts+cntw;
        }
        else{
            while(cnts>0 || cntw>0){
                if(s<=w){
                    if(s*a<=p){
                        a++;
                        cnts--;
                    }
                    else
                        break;
                    if(w*b<=p){
                        b++;
                        cntw--;
                    }
                }
                else if(s>w){
                    if(w*b<=p){
                        b++;
                        cntw--;
                    }
                    else
                        break;
                    if(s*a<=p){
                        a++;
                        cnts--;
                    }
                }
            }
            ans = a+b-2;
            while(cnts>0 || cntw>0){
                if(s<=w){
                    if(s*a<=f){
                        a++;
                        cnts--;
                    }
                    else
                        break;
                    if(w*b<=f){
                        b++;
                        cntw--;
                    }
                }
                else if(s>w){
                    if(w*b<=f){
                        b++;
                        cntw--;
                    }
                    else
                        break;
                    if(s*a<=f){
                        a++;
                        cnts--;
                    }
                }
            }
            ans = a+b-2;
        }
        cout<<ans<<endl;
    }
    return 0;
}



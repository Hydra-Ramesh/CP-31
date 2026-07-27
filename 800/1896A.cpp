#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F0R(i,n) for(int i=0;i<n;i++)
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi a(n);
        F0R(i,n) cin>>a[i];
        if(a[0]==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
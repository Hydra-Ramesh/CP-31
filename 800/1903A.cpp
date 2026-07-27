#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F0R(i,n) for(int i=0;i<n;i++)
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vll a(n);
        F0R(i,n) cin>>a[i];
        vll b(n);
        F0R(i,n) b[i]=a[i];
        sort(b.begin(),b.end());
        if(a==b || k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
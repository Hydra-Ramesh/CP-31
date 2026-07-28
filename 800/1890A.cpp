#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F0R(i,n) for(int i=0;i<n;i++)
#define mp map<int,int>
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        mp a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a[x]++;
        }
        if(a.size()>2){
            cout<<"NO"<<endl;
            continue;
        }
        if(a.size()==1){
            cout<<"YES"<<endl;
            continue;
        }
        vi b;
        for(auto x:a){
            b.push_back(x.second);
        }
        if(abs(b[0]-b[1])<=1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
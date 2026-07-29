#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define F0R(i,n) for(int i=0;i<n;i++)
#define mp map<int,int>
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        if(c%2){
            a++;
        }
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
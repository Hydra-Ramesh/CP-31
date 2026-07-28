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
        int n,k;cin>>n>>k;
        bool isFound=false;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==k){
                isFound=true;
            }
        }
        if(isFound){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
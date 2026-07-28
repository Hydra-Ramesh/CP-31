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
        int sum=0;
        for(int i=0;i<n-1;i++){
            int x;cin>>x;
            sum+=x;
        }
        cout<<-sum<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        ll n,x;cin>>n>>x;
        vll points;
        points.push_back(0);
        FOR(i,0,n){
            ll point;cin>>point;
            points.push_back(point);
        }
        points.push_back(x);
        n=points.size();
        ll maxDist=INT_MIN;
        FOR(i,1,n){
            if(i==n-1) maxDist=max(maxDist,2*(points[i]-points[i-1]));
            else maxDist=max(maxDist,points[i]-points[i-1]);
        }
        cout << maxDist << endl;
    }
}
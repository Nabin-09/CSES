#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define vl(x,n); vector<long long> x(n,0)
#define take(v); for(auto &i:v) cin>>i
int main()
{
    ll n;
    cin>>n;
    vl(a,n); take(a);
    ll ans=0;
    for(ll i = 1; i<n; i++){
        if(a[i]>=a[i-1]){
            continue;
        }
        else{
            ans = ans + a[i-1] - a[i]; 
            a[i] = a[i-1];
        }
    }
    cout<<ans;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k;
    cin>>n>>k;
    if(n%2==0 && k%2==0 && (k*k) <= n)
      cout<<"YES"<<endl;
    else if(n%2==1 && k%2==1 && (k*k) <= n)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	solve();
	}

	return 0;
}
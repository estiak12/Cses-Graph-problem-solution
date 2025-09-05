//Bismillahir Rahmanir Rahim
//Author Estiak Khan
// Submission Time on Cses 11.30 Am 
// Date: 5-9-2025
#include <bits/stdc++.h>
#include<string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long int
#define vii vector<pair<ll,ll>>
#define pii pair<ll,ll>
#define f first
#define s second
const ll inf = 1e18;
const ll  MOD = 1000000007;
using namespace std;
template<typename T> using ordered_set = tree<T, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 2e5 + 123;
const int Max_value=1e6+123,mx=1e7;
vector<ll>adj[N];
ll color[N];
ll h[N];
const int nn=1005;
ll vis[N];
char c[nn][nn];
char parent[nn][nn];
ll val[nn][nn];
ll dis[nn][nn];
vector<pii> segs;
ll cc,f,n,k;
ll par[N];
ll level_leaf[1002][1002];
ll leaf;
ll cnt[Max_value];
ll yes=0;
pair<ll,ll>jora;
ll dx[4]={-1, 1, 0, 0};
ll dy[4]={0, 0, 1, -1};
ll ch[4]={'U', 'D', 'R', 'L'};
vector<ll>v;
bool dfs(int n){
vis[n]=1;
for (auto u : adj[n]) {
     if(u==par[n])continue;
    if (!vis[u]) {
        par[u] = n;
        if (dfs(u)) return true;
    }
    else if (vis[u]) {
        v.push_back(n);
        ll val=n;

        while (n != u) {
            v.push_back(par[n]);
            n = par[n];
        }
        v.push_back(val);
        return true;
    }
}



return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=m; i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
    if(!vis[i]){
      if(dfs(i)){
        cout<<v.size()<<"\n";
        for(auto u:v)cout<<u<<" ";
        cout<<endl;
        return 0;
      }
    }
    }
    cout<< "IMPOSSIBLE"<<"\n";
    cout<<endl;
    for(ll i=1; i<=n; i++){
        adj[i].clear();
        vis[i]=0;
    }
}

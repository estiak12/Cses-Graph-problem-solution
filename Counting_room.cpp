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
ll vis[nn][nn];
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

void dfs(int i,int j, int n, int m){
 vis[i][j]=1;
 for(int k=0; k<4; k++){
    ll p=dx[k]+i;
    ll q=dy[k]+j;
    if(c[p][q]=='.' && !vis[p][q] && p<=n && p>=1 && q<=m && q>=1){
        dfs(p,q,n,m);
    }
 }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    ll cnt=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>c[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(!vis[i][j] && c[i][j]=='.'){
                dfs(i,j,n,m);
                 cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;

const int N=55;
const ll INF=1ll<<60;
int g1,g2,s1,s2,n,m; 
ll f[N][N][N],tot[N],mi[N],mx[N];
bool v[N][N],u[N][N];
vector<pair<int,int> >g[N];

void update(ll &x,ll y)
{
    x+=y;
}

int main()
{
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m;i++)
    {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        g[u].pb(make_pair(v,w));
        g[v].pb(make_pair(u,w));
    }
    scanf("%d%d%d%d",&g1,&g2,&s1,&s2);
    for (int i=1;i<=n;i++)
    {
        g[i].pb(make_pair(i,0));
        sort(g[i].begin(),g[i].end());
        mi[i]=g[i][0].fi;mx[i]=g[i].back().fi;
        for (int j=1;j<g[i].size();j++)
            v[i][g[i][j].fi]=true;
    }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (mi[i]<=mi[j]) u[i][j]=true;
    
    f[n+1][0][0]=1;
    for (int i=n;i;i--)
        for (int a=0;a<=n;a++)
            for (int b=0;b<=n;b++)
            {
                ll &res=f[i][a][b];
                update(f[i+1][a+1][b+(u[i][mx[a+1]]&&!v[i][mi[b]])],res);
                update(f[i+1][a+1][b+(u[i][mx[a+1]]&&v[i][mi[b]])],res);
                update(f[i+1][a][b+1+(u[i][mx[a]]&&!v[i][mi[b+1]])],res);
                update(f[i+1][a][b+1+(u[i][mx[a]]&&v[i][mi[b+1]])],res);
            }
    ll ans=0;
    for (int a=g1;a<=g2;a++)
        for (int b=s1;b<=s2;b++)
            ans+=f[a+b+1][a][b];
    printf("%lld\n",ans);
    return 0;
}
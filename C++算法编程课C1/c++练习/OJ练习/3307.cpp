#include<cstdio>
#include<cmath>
using namespace std;
const int N = 1e5+10;
typedef long long ll;
struct xds{
    int l, r;
    ll sum;
    bool k=0;
}tr[N*4];
int n,m,w[N];
inline void pushup(xds &u,xds&l,xds&r){
    u.sum=l.sum+r.sum;
    u.k=l.k&&r.k;
}
inline void pushup(int u){
    pushup(tr[u],tr[u<<1],tr[u<<1|1]);
}
inline void build(int u,int l,int r){
    if(l==r){
        tr[u].k=w[r]<=1;
        tr[u]={l,r,w[r]};return;
    }
    tr[u]={l,r};
    int mid(l+r>>1);
    build(u<<1,l,mid),build(u<<1|1,mid+1,r);
    pushup(u);
}
inline ll query(int u,int l,int r){
    if(tr[u].l>=l&&r>=tr[u].r)return tr[u].sum;
    int mid(tr[u].l+tr[u].r>>1);
    ll res(0);
    if(l<=mid)res+=query(u<<1,l,r);
    if(r>mid)res+=query(u<<1|1,l,r);
    return res;
}
inline void modify(int u,int l,int r){
    if(tr[u].k)return;
    if(tr[u].l==tr[u].r){
        tr[u].sum=sqrt(tr[u].sum);
        tr[u].k=tr[u].sum<=1;
    }
    else {
        int mid(tr[u].l+tr[u].r>>1);
        if(r<=mid)modify(u<<1,l,r);
        else if(l>mid)modify(u<<1|1,l,r);
        else {
            modify(u<<1,l,mid);
            modify(u<<1|1,mid+1,r);
        }
        pushup(u);
    }
}
int a,l,r;
int main(){
    scanf("%d",&n);
    for(int i(1);i<=n;i++)scanf("%d",&w[i]);
    scanf("%d",&m);
    build(1,1,n);
    while(m--){
        scanf("%d%d%d",&a,&l,&r);
        if(a>>1){
           modify(1,l,r);
        }
        else {
            printf("%lld\n",query(1,l,r)); 
        }
    }
}


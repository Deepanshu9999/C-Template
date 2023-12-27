#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define V  vector
#define pb  push_back
#define mp  make_pair
#define pq priority_queue
#define FIN(x) freopen(x,"r",stdin)
#define FOUT(x) freopen(x,"w",stdout)
#define ALL(x) x.begin(),x.end()
#define M(a,x) memset(a,x,sizeof(a))
#define sci(x) scanf("%d",&x);
#define scl(x) scanf("%lld",&x);
#define scs(x) scanf("%s",x);
#define SZ(x) (int)x.size()
#define print(x) printf("%d",x);
#define nl printf("\n")
#define fr first
#define se second
#define printl(x) printf("%lld",x)
#define F(i,a,n) for(int i=a;i<n;i++)
#define INF 4000000000000000000LL
#define LL long long

const int N = 1e5+5;
LL a[5];
int main() {
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  sort(a,a+5);
  LL s = 0;
  F(i,0,5) s+=a[i];
  cout << s-a[4] <<" "<<s-a[0] << endl;
}
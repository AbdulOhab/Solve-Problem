#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

void solve()
{
  ll n,k;
  cin>>n>>k;
  ll arr[n+12],sum=0;
  for(int i=0; i<n;i++) {
    cin>>arr[i];
    sum+=arr[i];
  }

  ll mx=0,mn;
  for(int i=0;i<n;i++)
  {
    double ans = (double)arr[i]/k;
    mx += ceil(ans);
    mn = ceil((double) sum / k);
  }
  cout<<mn<<" "<<mx<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //solve();
   int T;
   cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}

//910A
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;

int n,d,x,y;
string s;
main()
{
  cin>>n>>d>>s;

  while(x<n-1 and y<=n)
  {
    if(s[x]=='1')
    {
      y++;
      x+=d;
    }
    else
    {
      x--;
    }
  }
  cout<<(y>=n ?-1:y)<<endl;
}






// const ll MAXN=100,INF=1000000000000000000;
// int n,d;
// char inp[MAXN];
// int dist[MAXN];
// main()
// {
//     cin>>n>>d;
//     for(int i=0; i<n; i++)
//     {
//         cin>>inp[i];
//         dist[i]=INF;
//         dist[0]=0;
//     }
//
//     for(int i=0; i<n; i++)
//     {
//         if(inp[i]=='1')
//         {
//             for(int j=i+1; i<min(i+d+1,n); j++)
//             {
//                 dist[j]=min(dist[j],dist[i]+1);
//             }
//         }
//     }
//     if(dist[n-1]==INF)
//     {
//         dist[n-1]==-1;
//     }
//     cout<<dist[n-1]<<endl;
// }
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define For(i, a, b) for(int i=a; i<b; i++)
// #define ffi For(i, 0, N)
// #define ffj For(j, 0, M)
// #define ffa ffi ffj
// #define s <<" "<<
// #define w cout
// #define e "\n"
// #define pb push_back
// #define mp make_pair
// #define a first
// #define b second
// #define int ll
// const int MAXN=100, INF=1000000000000000000;
// ///500,000,000
// int N, D, dist[MAXN];
// char inp[MAXN];
//
//
// main() {
//     //ifstream cin("test.in");
//     //ifstream cin("greedy.in");ofstream cout("greedy.out");
//     ios_base::sync_with_stdio(0); cin.tie(0);
//     cin >> N >> D;
//     ffi cin >> inp[i], dist[i] = INF;
//     dist[0] = 0;
//     ffi {
//         //w<< dist[i]<<e;
//         if (inp[i] == '1') {
//         For (j, i+1, min(i+D+1, N)) dist[j] = min(dist[j], dist[i]+1);
//         }
//     }
//     if (dist[N-1] == INF) dist[N-1] = -1;
//     w<< dist[N-1]<<e;
// }

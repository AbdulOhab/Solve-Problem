#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

using namespace std;
int n,a[105],k,o;
int main()
{
    scanf("%d",&n);
    k=n>>1;
    for(int i=1; i<=n; i++)scanf("%d",a+i),o+=a[i];
    o/=k;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>0)
        {
            int p=i;
            for(int j=i+1; j<=n; j++)if(a[i]+a[j]==o)p=j,j=n+1;
            a[i]=-1,a[p]=-1;
            printf("%d %d\n",i,p);
        }
    }
    return 0;
}

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    //136A
    int n,arr[100+10];
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[x]=i;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<endl;


//////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////
//    //110A
//    unsigned long long n;
//    int s=0;
//    cin>>n;
//    while(n){
//        if(n%10==4||n%10==7)
//            s++;
//        n/=10;
//    }
//    if(s==4||s==7)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //228A
//    int a[5];int x;int p=0;
//    cin>>a[1];
//    for(int i=2;i<=4;i++){
//        cin>>a[i];
//    }
//    for(int i=2;i<=4;i++){
//            for(int j=1;j<i;j++ ){
//                if(a[j]==a[i]){
//                p++;
//                break;
//                }
//            }
//
//    }
//    cout<<p<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //144A
//    int n,ma=0,mi=0;
//    int a[10000+10];
//    cin>>n;
//    cin>>a[1];
//    ma=1;
//    mi=1;
//    for(int i=2;i<=n;i++){
//        cin>>a[i];
//        if(a[i]>a[ma]){
//            ma=i;
//        }
//        if(a[i]<=a[mi]){
//            mi=i;
//        }
//    }
//    if(ma>mi)
//        cout<<ma+n-mi-2<<endl;
//    else
//        cout<<ma+n-mi-1<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //96A
//    string t;
//    cin>>t;
//    int i=0,n=0,m=0;
//    while(i<t.size()){
//        if(t[i]=='0'){
//            n=n+1;
//            m=0;
//        }
//        else{
//            m=m+1;
//            n=0;
//        }
//        if((n==7)||(m==7)){
//            cout<<"YES"<<endl;
//            return 0;
//        }
//        i++;
//    }
//    cout<<"NO"<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //160A
//    int n;int c[100+10];int s=0,p=0;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        cin>>c[i];
//        s=s+c[i];
//    }
//    sort(c+1,c+n+1);
//
//    for(int i=n;i>=0;i--){
//        if(p>s){
//            cout<<n-i;
//            break;
//        }
//        else{
//            p=p+c[i];
//            s=s-c[i];
//        }
//    }
//////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //282A
//    int n,x=0;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        string s;
//        cin>>s;
//        if( ((s[0] =='X')&&(s[1]=='+')&&(s[2]=='+')) || ((s[0] =='+')&&(s[1]=='+')&&(s[2]=='X')))
//            x++;
//        else
//            x--;
//    }
//    cout<<x<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //133A
//    string s;
//    cin>>s;
//    int k=0;
//    for(int i=0;i<s.size();i++){
//        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
//            k=1;
//    }
//    if(k)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //266A
//    int n;
//    string s;
//    cin>>n;n=0;
//    cin>>s;
//    for(int i=1;i<s.size();i++){
//        if(s[i]==s[i-1])
//            n++;
//    }
//    cout<<n<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //112A
//    string s,t;
//    long long a[100+10],b[100+10];
//    cin>>s>>t;
//    for(int i=0;i<s.size();i++){
//        if(s[i]>96)
//            s[i]-=32;
//        a[i]=s[i]-'0';
//
//
//    }
//    for(int i=0;i<t.size();i++){
//        if(t[i]>96)
//            t[i]-=32;
//        b[i]=t[i]-'0';
//
//
//    }
//    for(int i=0;i<s.size();i++){
//        if(a[i]<b[i]){
//            cout<<-1<<endl;
//            return 0;
//        }
//        if(a[i]>b[i]){
//            cout<<1<<endl;
//            return 0;
//        }
//    }
//    cout<<0<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //148A
//    int a,b,c,d,n,j=0;
//    cin>>a>>b>>c>>d>>n;
//    for(int i=1;i<=n;i++){
//        if((i%a!=0)&&(i%b!=0)&&(i%c!=0)&&(i%d!=0)){
//
//        }
//        else{
//             j++;
//            cout<<i<<"    "<<i%a<<"      "<<i%b<<"      "<<i%c<<"      "<<i%d<<"      "<<endl;
//        }
//    }
//    cout<<j;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //231A
//    int n;
//    cin>>n;
//    int a,b,c,s=0;
//    for(int i=1;i<=n;i++){
//        cin>>a>>b>>c;
//        if((a+b+c)>1)
//            s++;
//    }
//    cout<<s<<endl;
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //131A
//    string s;
//    cin>>s;
//    int cap;
//    for(int i=1;i<s.size();i++){
//        if(s[i]>96){
//            cout<<s<<endl;
//            return 0;
//        }
//    }
//    if(s[0]>96){
//        s[0]-=32;}
//    else{
//         s[0]+=32;}
//    for(int i=1;i<s.size();i++)
//        s[i]+=32;
//    cout<<s<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //50A
//    int m,n;
//    cin>>m>>n;
//    cout<<m*n/2<<endl;
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //116A
//    int n,s=0;
//    cin>>n;
//    int Max=0;
//    for(int i=1;i<=n;i++){
//        int a,b;
//        cin>>a>>b;
//        s-=a;
//        s+=b;
//        if(Max<s)
//            Max=s;
//
//    }
//  cout<<Max<<endl;
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//   //82A
//   int n;
//   cin>>n;
//   string s[6]={"","Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
//
//   int i=1;
//   while(1){
//        for(int j=1;j<=5;j++){
//            if(n>i)
//                n-=i;
//            else{
//                cout<<s[j]<<endl;
//                return 0;
//            }
//        }
//        i*=2;
//   }
//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//    //118A
//    int next =1,a=0;
//    string s,t;
//    t+='.';
//    cin>>s;
//    for(int i=0;i<s.size();i++){
//        if(s[i]<97)
//            s[i]+=32;
//
//        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
//                a++;
//
//        }
//        else{
//            if(t[next-1]!='.'){
//                t+='.';next++;
//
//                }
//            t+=s[i];next++;
//
//        }
//    }
//    cout<<t<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}

#include <cstdio>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int a,b,c,d,e,f;
    while((cin>>a>>b>>c))
    {
        if(a==0 || b==0 || c== 0){
         break;}
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }

}

#include<iostream>
#include<vector>
using namespace std;
vector<string>v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0||b==0||c==0)break;
        if(a==b&&a==c&&a==c)v.push_back("wrong");
        long long int a2,b2,c2;
        a2=a*a;
        b2=b*b;
        c2=c*c;
        if(a2+b2==c2)v.push_back("right");
        else if(a2+c2==b2)v.push_back("right");
        else if(c2+b2==a2)v.push_back("right");
        else v.push_back("wrong");
    }
    
    for(int x=0;x<v.size();x++)
    {
        cout<<v[x]<<endl;
    }
    return 0;
}

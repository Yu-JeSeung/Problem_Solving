#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

vector<string>v;
vector<string>r;
int cnt1,cnt2;

void find_r(string req)
{
    int len=req.length();
    for(int x=0;x<len;x++)
    {
        if(cnt1<cnt2)break;
        if(req[x]=='(')
        {
            cnt1++;
        }
        if(req[x]==')')
        {
            cnt2++;
        }
    }
    
    if(cnt1==cnt2)r.push_back("YES");
    else r.push_back("NO");
    cnt1=0,cnt2=0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a;
    cin>>a;
    for(int x=0;x<a;x++)
    {
        string q;
        cin>>q;
        v.push_back(q);
    }
    for(int x=0;x<a;x++)
    {
        find_r(v[x]);
    }
    
    for(int x=0;x<r.size();x++)
    {
        cout<<r[x]<<"\n";
    }
    
    return 0;
}

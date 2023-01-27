#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n,m;
vector<string>v,g,answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    
    for(int x=0;x<n;x++)
    {
        string a;
        cin>>a;
        v.push_back(a);
    }
    for(int x=0;x<m;x++)
    {
        string a;
        cin>>a;
        g.push_back(a);
    }

    sort(v.begin(),v.end());
    sort(g.begin(),g.end());
    
    for(int x=0;x<m;x++)
    {
        string a=g[x];
        if(binary_search(v.begin(),v.end(),a))
            answer.push_back(a);
    }
    cout<<answer.size();
    
    
    return 0;
}

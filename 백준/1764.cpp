#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int a,b;
vector<string>v,g;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    cin>>a>>b;
    for(size_t x=0;x<a;x++)
    {
        string c;
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    
    for(size_t x=0;x<b;x++)
    {
        string w;
        cin>>w;
        if(binary_search(v.begin(),v.end(),w))
            g.push_back(w);
    }
    sort(g.begin(),g.end());
    cout<<g.size()<<endl;
    for(size_t x=0;x<g.size();x++)
    {
        cout<<g[x]<<endl;
    }
    
    return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    vector<int>v;
    for(int x=0;x<a;x++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int x=0;x<v.size();x++)
    {
        cout<<v[x]<<" ";
    }
    
    return 0;
}

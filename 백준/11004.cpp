#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int a;
    cin>>a;
    int q;
    cin>>q;
    for(int x=0;x<a;x++)
    {
        int b;
        scanf("%d",&b);
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    cout<<v[q-1];
    
    return 0;
}

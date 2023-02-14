#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int>v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b,sum=0;
    cin>>a;
    for(int x=0;x<a;x++)
    {
        cin>>b;
        if(b==0)v.pop_back();
        else {
            v.push_back(b);
        }
    }
    for(int x=0;x<v.size();x++)
    {
        sum+=v[x];
    }
    cout<<sum;
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

vector<int>v;
int mAx=-21e8;
int result;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int x=0;x<9;x++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    for(int x=0;x<9;x++)
    {
        if(v[x]>mAx)
        {
            mAx=v[x];
            result=x;
        }
    }
    cout<<mAx<<endl<<result+1;
    
    return 0;
}

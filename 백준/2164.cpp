#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

deque<int>dq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,cnt=1;
    cin>>a;
    for(int x=1;x<=a;x++)
    {
        dq.push_back(x);
    }
    
    while(dq.size()!=1)
    {
        if(cnt%2==1)
        {
            dq.pop_front();
        }
        else
        {
            dq.push_back(dq[0]);
            dq.pop_front();
        }
        cnt++;
    }
    cout<<dq[0];
    
    
    return 0;
}

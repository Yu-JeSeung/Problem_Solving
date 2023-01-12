#include<iostream>
#include<algorithm>
using namespace std;
struct where_xy{
    int xx;
    int yy;
};

bool cmp(const where_xy &p1, const where_xy &p2){
    if(p1.xx < p2.xx){
        return true;
    }
    else if(p1.xx == p2.xx){
        return p1.yy < p2.yy;
    }
    else{
        return false;
    }
}

int main()
{
    int a;
    cin>>a;
    where_xy able[100000];
    for(int x=0;x<a;x++)
    {
        cin>>able[x].xx>>able[x].yy;
    }
    sort(able,able+a,cmp);
    
    for(int x=0;x<a;x++)
    {
        cout<<able[x].xx<<" "<<able[x].yy<<"\n";
    }
    
    
    
    return 0;
}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int a;
vector<int>v; // 입력 받아두는 공간
vector<int>i; // 바닥에 버린 카드

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>a;
    
    // v 백터에 값 입력
    for(int x=1;x<=a;x++)
    {
        v.push_back(x);
    }
    
    // v 백터 사이즈만큼 반복
    while(v.size()!=0)
    {
        // i 벡터에 넣고 넣은 값 v 벡터에서 삭제
        i.push_back(v[0]);
        v.erase(v.begin());
        
        // v 벡터 제일 앞의 값 맨뒤로 보내기
        v.push_back(v[0]);
        v.erase(v.begin());
    }
    
    // 출력
    for(int x=0;x<i.size();x++)
    {
        cout<<i[x]<<" ";
    }
    
    return 0;
}

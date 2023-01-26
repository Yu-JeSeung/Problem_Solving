#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    vector<int>g(m);
    vector<int>answer;
    
    for(int x=0;x<n;x++)
    {
        cin>>v[x];
    }
    for(int x=0;x<m;x++)
    {
        cin>>g[x];
    }
    
    sort(v.begin(),v.end());
    sort(g.begin(),g.end());
    
    for (int i = 0; i < n; i++) {
        int lt = 0;
        int rt = m - 1;
        bool isFind = false;
        while (lt <= rt) {
            int mid = (lt + rt) / 2;

            if (g[mid] == v[i]) {
                isFind = true;
                break;
            }
            else if (g[mid] > v[i]) {
                rt = mid - 1;
            }
            else {
                lt = mid + 1;
            }
        }

        if (!isFind)
            answer.push_back(v[i]);
    }
    
    for (int i = 0; i < m; i++) {
        int lt = 0;
        int rt = n - 1;
        bool isFind = false;
        while (lt <= rt) {
            int mid = (lt + rt) / 2;

            if (v[mid] == g[i]) {
                isFind = true;
                break;
            }
            else if (v[mid] > g[i]) {
                rt = mid - 1;
            }
            else {
                lt = mid + 1;
            }
        }

        if (!isFind)
            answer.push_back(g[i]);
    }
    
    cout<<answer.size();
    
    
    
    return 0;
}

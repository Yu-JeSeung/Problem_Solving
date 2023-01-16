#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int N[], int length, int x)
{
    int left = 0;
    int right = length-1;
    int pivot;
    while (left <= right)
    {
        pivot = (left + right) / 2;
        if (x < N[pivot])
        {
            right = pivot - 1;
             
        }
        else if (x > N[pivot])
        {
            left = pivot + 1;
         
        }
        else
            return 1;

    }
    return 0;
}

 
int main() {
    int N;
    cin >> N ;
    int* p = new int[N];
   
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
   
    int M;
    cin >> M;
    int *q = new int[M];
    for (int i = 0; i < M; i++)
        cin >> q[i];
    
    sort(p,p+N);
    for (int i = 0; i < M; i++)
    {
      
        cout << binarySearch(p, N, q[i]) << "\n";
    }
    delete[] p;
    delete[] q;

    return 0;

    
}

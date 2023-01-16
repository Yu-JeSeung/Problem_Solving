#include<iostream>
using namespace std;
int map[5][5] = {
    0,0,0,0,0,
    0,1,0,1,0,
    1,0,0,0,0,
    0,0,1,1,1,
    0,0,0,0,0
};
struct node {
    int y, x;
    int level;
};
node queue[200];
int head = 0;
int tail = 1;
int direct[4][2] = { // 현재 위치에서 위, 아래, 왼쪽, 오른쪽 검사
    -1,0,
    1,0,
    0,-1,
    0,1
};
int visite[5][5] = { 1 }; // 방문했던곳 표시
int main(){
    while (1) {
        node now = queue[head++];
        for (int t = 0; t < 4; t++)
        {
            int dy = now.y + direct[t][0]; // 0
            int dx = now.x + direct[t][1]; // 1

            // 배열 범위 밖 노노
            if (dy < 0 || dx < 0 || dy>4 || dx>4)continue;
            // 벽 노노
            if (map[dy][dx] == 1)continue;
            // 한번 왔던길 노노
            if (visite[dy][dx] == 1)continue;
            visite[dy][dx] = 1;
            queue[tail++] = { dy,dx,now.level + 1 };

            if (dy == 4 && dx == 4) // y:4,x:4 에 도착하면 끝
            {
                cout << now.level + 1<<"\n";
                return 0;
            }
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void solve() {
    int grid[5][5];
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> grid[i][j];
        }
    }
    
    if (grid[0][0] == 1 || grid[4][4] == 1) {
        cout << "ROBBERS\n";
        return;
    }
    
    bool visited[5][5];
    memset(visited, false, sizeof(visited));
    
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;
    
    bool reached_end = false;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if (x == 4 && y == 4) {
            reached_end = true;
            break;
        }
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
                if (grid[nx][ny] == 0 && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    
    if (reached_end) {
        cout << "COPS\n";
    } else {
        cout << "ROBBERS\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while(T--) {
            solve();
        }
    }
    
    return 0;
}
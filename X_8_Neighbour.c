#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char a[105][105];
    for (int i = 0; i < n; i++) scanf("%s", a[i]);

    int x, y;
    scanf("%d %d", &x, &y);
    x--; y--;

    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};
    int ok = 1;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (a[nx][ny] != 'x') ok = 0;
        }
    }

    if (ok) printf("yes");
    else printf("no");

    return 0;
}

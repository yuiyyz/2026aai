// week11-6a.cpp SOIT108_Advance_002B
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b) { // 大小不對, 就交換
        int t = a; a = b; b = t;
    }
    if (a < c) { // 大小不對, 就交換
        int t = a; a = c; c = t;
    }
    if (b < c) { // 大小不對, 就交換
        int t = b; b = c; c = t;
    }
    printf("%d", a * 100 + b * 10 + c + 1);
}

// week11-6b.cpp SOIT108_Advance_004
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;
    for (int i=1; i<=N; i++) {
        ans += i * 11;
    }
    printf("%d", ans);
}

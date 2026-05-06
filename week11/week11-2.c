// week11-2a.cpp SOIT106_ADVANCE_001
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    // 剝皮法，只要還有N，繼續剝
    while ( N > 0 ) { // Part A
        // 剝下來的皮 N%10
        printf("%d", N % 10);
        // 剝皮後的結果 N / 10
        N = N / 10;
    }
}

// week11-2b.cpp SOIT106_ADVANCE_001
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0; // Part B
    while (N > 0) {
        ans = ans * 10 + N % 10; // Part B
        N = N / 10;
    }
    printf("%d+%d=%d\n", N, ans, ans + N);
}

// week11-2c.cpp SOIT106_ADVANCE_001
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0; // Part B，用來存放反轉後的結果
    int N2 = N;  // Part C，備份原始的 N，因為 N 在迴圈中會被剝皮削到 0
    while (N > 0) {
        ans = ans * 10 + N % 10; // Part B
        N = N / 10;
    }
    printf("%d+%d=%d\n", N2, ans, ans + N2); // 使用備份的 N2 來輸出
}

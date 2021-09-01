#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, k, arr[1000], dp[1000];
    int max = 1;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &k);
        arr[i] = k;
    }

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(arr[j] < arr[i] && dp[j]+1 > dp[i]) {
                dp[i] = dp[j] + 1;
                if(max < dp[i]) {
                    max = dp[i];
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}
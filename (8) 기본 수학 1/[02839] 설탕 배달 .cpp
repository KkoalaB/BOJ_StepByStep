#include <iostream>

using namespace std;

int main() {
    int N, cnt = 0;

    scanf("%d", &N);

    while(N % 5 > 0) {
        N -= 3;
        cnt++;
        if(N == 0) {
            printf("%d\n", cnt);
            return 0;
        }
        else if(N < 3) {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n", cnt + N/5);
}
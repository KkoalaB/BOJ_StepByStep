/* 최대공약수 최소공배수 */
// 최대공약수 Greatest Common Divisor
// 유클리드 호제법(euclidean algorithm) 사용.
int GCD(int a, int b) {
    if(a % b == 0) return b;
    return GCD(b, a%b);
}

// 최소공배수 Least Common Multiple
// GCD 함수 필요
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

// 순열 조합
// nCk 같은 조합 구하는 함수
int combination(int n, int k) {
    int C[0][0]; // 사용시 이 부분 지우고 전역으로 C[][] 배열 선언 필요
    if(C[n][k] > 0) return C[n][k];
    if(C[n][n-k] > 0) return C[n][k] = C[n][n-k];
    if(n == 0) return C[n][k] = 0;
    if(n == k) return C[n][k] = 1;
    if(k == 0) return C[n][k] = 1;
    return C[n][k] = combination(n-1, k-1) + combination(n-1, k);
}
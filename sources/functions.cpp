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
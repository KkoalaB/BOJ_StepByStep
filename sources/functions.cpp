/* 최대공약수 최소공배수 */
// 최대공약수 Greatest Common Divisor
int GCD(int a, int b) {
    if(a % b == 0) return b;
    return GCD(b, a%b);
}

// 최소공배수 Least Common Multiple
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}
/* �ִ����� �ּҰ���� */
// �ִ����� Greatest Common Divisor
int GCD(int a, int b) {
    if(a % b == 0) return b;
    return GCD(b, a%b);
}

// �ּҰ���� Least Common Multiple
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}
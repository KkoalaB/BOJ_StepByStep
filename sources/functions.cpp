/* �ִ����� �ּҰ���� */
// �ִ����� Greatest Common Divisor
// ��Ŭ���� ȣ����(euclidean algorithm) ���.
int GCD(int a, int b) {
    if(a % b == 0) return b;
    return GCD(b, a%b);
}

// �ּҰ���� Least Common Multiple
// GCD �Լ� �ʿ�
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

// ���� ����
// nCk ���� ���� ���ϴ� �Լ�
int combination(int n, int k) {
    int C[0][0]; // ���� �� �κ� ����� �������� C[][] �迭 ���� �ʿ�
    if(C[n][k] > 0) return C[n][k];
    if(C[n][n-k] > 0) return C[n][k] = C[n][n-k];
    if(n == 0) return C[n][k] = 0;
    if(n == k) return C[n][k] = 1;
    if(k == 0) return C[n][k] = 1;
    return C[n][k] = combination(n-1, k-1) + combination(n-1, k);
}
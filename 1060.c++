#include <stdio.h>

int main() {

    long long int i, j, k;

    scanf("%lld %lld", &i, &j);
    k = i & j; // ��Ʈ������ and ����
    printf("%lld", k);
    return 0;
}
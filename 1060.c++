#include <stdio.h>

int main() {

    long long int i, j, k;

    scanf("%lld %lld", &i, &j);
    k = i & j; // 비트단위로 and 연산
    printf("%lld", k);
    return 0;
}
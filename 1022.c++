#include <stdio.h>

int main() {
    char data[2001];
    fgets(data, 2000, stdin);//�ִ� ���̴� 2000 ���ڸ� ���� �ʴ´�
    printf("%s", data);
}
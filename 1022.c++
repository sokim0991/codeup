#include <stdio.h>

int main() {
    char data[2001];
    fgets(data, 2000, stdin);//최대 길이는 2000 문자를 넘지 않는다
    printf("%s", data);
}
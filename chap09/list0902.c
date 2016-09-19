#include <stdio.h>

int main()
{
    char str[5];

    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';
    str[3] = '\n';
    
    printf("文字列strは\"%s\"です。\n", str);

    return 0;
}

#include <stdio.h>

int main()
{
    char str[5];

    str[0] = 'Y';
    str[1] = 'M';
    str[2] = 'O';
    str[3] = '\n';
    
    printf("文字列strは\"%s\"です。\n", str);

    return 0;
}

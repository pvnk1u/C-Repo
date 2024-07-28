/*
 Created by pvnk1u on 2024/7/28.
 编写一个程序，根据用户输入的英文名和姓先显示姓氏，其后跟一个逗号，然后显示名的首字母，最后跟一个点：

 Enter a first and last name: Lloyd Fosdick
 Fosdick,L.
*/

#include <stdio.h>

int main(void) {
    char c, initial;

    printf("Enter a first and last name: ");

    while ((c = getchar()) == ' ')
        ;
    initial = c;
    while ((c = getchar()) != ' ')
        ;
    while ((c = getchar()) != '\n')
        putchar(c);
    printf(", %c.\n", initial);

    return 0;
}

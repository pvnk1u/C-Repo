/*
 Created by pvnk1u on 2024/7/10.

 编写程序，提示用户输入一个数n，然后显示出1~n的所有偶数平方值。例如，如果用户输入100，
 那么程序应该显示出下列内容：

 4
 16
 25
 36
 64
 100
*/

#include <stdio.h>

int main(void) {
    int n,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for (i = 1; i * i <= n; i++) {
        if ((i * i) % 2 != 0)
            continue;
        printf("%d\n", i * i);
    }
    return 0;
}
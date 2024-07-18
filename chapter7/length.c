/*
 Created by pvnk1u on 2024/7/18.

在用户输入消息后，程序显示长度：

```
Enter a message: Brevity is the soul of wit.
Your message was 27 character(s) long.
```

消息的长度包括空格和标点符号，但是不包含消息结尾的换行符。



程序需要采用循环结构来实现读入字符和计数器自增操作，循环在遇到换行符时立刻终止。



*/
#include <stdio.h>

int main(void){
    char ch;
    int len =0;

    printf("Enter a message: ");
    ch = getchar();
    while(ch != '\n'){
        len++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long.\n",len);

    return 0;
}
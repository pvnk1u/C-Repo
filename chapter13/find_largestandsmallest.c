/**
编写程序找出一组单词中“最小”单词和“最大”单词。用户输入单词后，程序根据字典顺序决定
排在最前面和最后面的单词。当用户输入 4 个字母的单词时，程序停止读入。假设所有单词都不超
过 20 个字母。程序会话如下：
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Smallest word: cat
Largest word: zebra

 */

#include <stdio.h>
#include <string.h>

#define LENGTH 20

int read_line(char str[],int n);

int main(){

    char a[LENGTH+1];
    char largest[LENGTH+1];
    char smallest[LENGTH+1];

    // 标记是否为第一个单词
    int first_word = 1;
    for(;;){
        printf("Enter word: ");
        int endIndex = read_line(a,LENGTH);
        if(first_word){
            strcpy(largest,a);
            strcpy(smallest,a);
            first_word = 0;
        }else{
            if(strcmp(a,largest) > 0){
                strcpy(largest,a);
            }
            if(strcmp(a,smallest) < 0){
                strcpy(smallest,a);
            }
        }
        
        if(endIndex == 4){
            break;
        }
    }
    printf("Smallest word: %s\n",smallest);
    printf("Largest word: %s\n",largest);
    
    return 0;
}

int read_line(char str[],int n) {
    int ch,i=0;
    while ((ch=getchar()) != '\n'){
        if (i<n){
            str[i++] = ch;   
        }
        
    }
    str[i] = '\0';
    return i;
}
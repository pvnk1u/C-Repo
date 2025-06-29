/**
 * 编写程序读一条消息，然后检查这条消息是否是回文（消息中的字母从左往右读和从右往左读是一样的）：
   Enter a message: He lived as a devil, eh?
   Palindrome
   Enter a message: Madam, I am Adam.
   Not a palindrome

   忽略所有不是字母的字符。用整型变量来跟踪数组中的位置。
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LENGTH 100

int main(int argc, char const *argv[]){
    printf("Enter a message: ");
    char a[LENGTH];
    int i = 0;
    char c;
    while((c=getchar()) != '\n' && i< LENGTH -1){
        a[i++] = c;
    }
    a[i] = '\0';
    int startIndex = 0;
    int endIndex= i-1;
    bool result = true;
    while(startIndex < endIndex){
      // 跳过非字母字符
      while (!isalpha(a[startIndex]) && startIndex < endIndex) startIndex++;
      while (!isalpha(a[endIndex]) && startIndex < endIndex) endIndex--;
      if(tolower(a[startIndex]) != tolower(a[endIndex])){
        result = false;
        break;
      }
      startIndex++;
      endIndex--;
    }
    if(result){
      printf("Palindrome");
    }else{
      printf("Not a palindrome");
    }
    return 0;
}
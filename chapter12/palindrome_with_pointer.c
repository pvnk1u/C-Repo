/**
 * 指针代替整数跟踪数组中的位置来实现palindrome.c中的逻辑。
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
        *(a+i++) = c;
    }
    a[i] = '\0';
    char *startP = a;
    char *endP= a+i-1;
    bool result = true;
    while(startP < endP){
      // 跳过非字母字符
      while (!isalpha(*startP) && startP < endP) startP++;
      while (!isalpha(*endP) && startP < endP) endP--;
      if(tolower(*startP) != tolower(*endP)){
        result = false;
        break;
      }
      startP++;
      endP--;
    }
    if(result){
      printf("Palindrome");
    }else{
      printf("Not a palindrome");
    }
    return 0;
}
//
// Created by pvnk1u on 2024/6/26.
// 图书用国际标准书号（ISBN）进行标识。2007年1月1日之后的ISBN包含13位有效数字，分为5组，如978-0-393-97950-3。
// 第一组（GS1前缀）目前为978或979.第二组（组标识）指明语言或者原出版国（如0和1用于讲英语的国家）。
// 第三组（出版商编号）表示出版商。第四组（产品编号）是由出版商分配的用于识别具体哪一本书的。ISBN的末尾是一个校验数字，
// 用于验证前面数字的准确性。编写一个程序用来分解用户录入的ISBN信息:
// Enter ISBN:978-0-393-97950-3
//
// GS1 prefix: 978
// Group identifier: 0
// Publisher code: 393
// Item number: 97950
// Check digit: 3
//

#include <stdio.h>


int main(void) {
    printf("Enter ISBN: ");
    int gs1,group,pub,itemNo,checkDigit;
    scanf("%d-%d-%d-%d-%d",&gs1,&group,&pub,&itemNo,&checkDigit);

    printf("GS1 prefix: %d\n",gs1);
    printf("Group identifier: %d\n",group);
    printf("Publisher code: %d\n",pub);
    printf("Item number: %d\n",itemNo);
    printf("Check digit: %d\n",checkDigit);
}
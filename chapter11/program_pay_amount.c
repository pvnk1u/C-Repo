/**
 * 编写以下函数：
 * 为支付参数dollars表示的付款金额，所需20美元、10美元、5美元和1美元的最小数目
 */

#include <stdio.h>

void pay_amount(int dollars,int *twenties,int *tens,int *fives,int *ones);

int main(void){
    int dollars = 137,*twenties,*tens,*fives,*ones;
    pay_amount(dollars,twenties,tens,fives,ones);
    printf("twenties:%d tens:%d fives:%d ones:%d",*twenties,*tens,*fives,*ones);
    return 0;
}

void pay_amount(int dollars,int *twenties,int *tens,int *fives,int *ones){
    *twenties = dollars/20;
    *tens = (dollars - (*twenties * 20))/10;
    *fives = (dollars - (*twenties * 20) - (*tens*10))/5;
    *ones = dollars - (*twenties * 20) - (*tens*10) - (*fives * 5);
}

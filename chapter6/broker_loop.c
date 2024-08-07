/*
 Created by pvnk1u on 2024/7/10.
在broker.c程序中添加循环，以便用户可以输入多笔交易并且程序可以计算每次的佣金。程序在用户输入的交易额为0时终止

Enter value of trade: 30000
Commission: $166.00

Enter value of trade: 20000
Commission: $144.00

Enter value of trade: 0

*/
#include <stdio.h>

int main(void) {
   float commission,value;

   for(;;) {
       printf("Enter value of trade: ");
       scanf("%f",&value);

       if(value == 0) {
           break;
       }
       else if (value < 2500.f)
           commission = 30.00f + .017f * value;
       else if(value < 6250.00f)
           commission = 56.00f + .0066f*value;
       else if(value < 20000.00f)
           commission = 76.00f + .0034f * value;
       else if(value < 50000.00f)
           commission = 100.00f + .0022f * value;
       else if(value < 500000.00f)
           commission  = 155.00f + .0011f * value;
       else
           commission = 255.00f + .0009f * value;

       if (commission < 39.00f)
           commission = 39.00f;

       printf("Commission:$%.2f\n",commission);
   }

   return 0;
}
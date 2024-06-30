/*
 Created by pvnk1u on 2024/6/30.

计算股票经纪人的佣金

当股票通过经纪人进行买卖时，经纪人的佣金往往根据股票交易额采用某种变化的比例进行计算。下面的表格显示了实际支付给经纪人的费用数量。

| 交易额范围       | 佣金数量      |
| ---------------- | ------------- |
| 低于2500美元     | 30美元+1.7%   |
| 2500~6250美元    | 56美元+0.66%  |
| 6250~20000美元   | 76美元+0.34%  |
| 20000~50000美元  | 100美元+0.22% |
| 50000~500000美元 | 155美元+0.11% |
| 超过500000美元   | 255美元+0.09% |


*/

#include <stdio.h>

int main(void) {
   float commission,value;

    printf("Enter value of trade: ");
    scanf("%f",&value);

    if (value < 2500.f)
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
    return 0;
}
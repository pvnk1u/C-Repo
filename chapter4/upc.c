/**
Created by pvnk1u on 2024/6/29.

美国和加拿大的货物生产商都会在超市销售的每件商品上放置一个条形码。这种被称为通用产品代码的条形码可以识别生产商和产品。
每个条形码表示一个12位的数，通常这个数会打印在条形码下面。例如，`0 13800 15173 5`出现在条形码的下方。
其中第一个数字表示商品的种类。第一组5位数字用来标识生产商。第二组5位数字用来标识产品（包括包装尺寸）。
最后一位数字是“校验位”，它唯一的目的是用来帮助识别前面数字中的错误。
如果条形码扫描出现错误，那么前11位数字可能会和最后一位数字不匹配，超市扫描机将拒绝整个条形码。

下面是一种计算校验位的方法：首先把第1位、第3位、第5位、第7位、第9位和第11位数字相加；
然后把第2位、第4位、第6位、第8位和第10位数字相加；接着把第一次加法的结果乘以3，
再和第二次加法的结果相加；随后再把上述结果减去1；相减后的结果除以10取余数；最后用9减去上一步骤中得到的余数。

编写一个程序来计算任意通用产品代码的混淆位。要求用户录入通用产品代码的前11位数字，
然后程序显示出相应的校验位。为了避免混淆，要求用户分3部分录入数字：左边的第一个数字、第一组5位数字以及第二组5位数字。
程序会话的形式如下所示：

Enter the first (single) digit: 0
Enter first group of five digits: 13800
Enter second group of five digits: 15173
Check digit: 5


 */

#include <stdio.h>

int main(void) {
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,
        first_sum,second_sum,total;

    /**
     *程序不是按一个五位数来读取每组5位数字的，而是将它们读作5个一位数。把数看成一个个独立的数字进行读取更为方便，
     *而且也无需担心由于五位数过大而无法存储到int型变量中。（某些编译器限定int型变量的最大值为32 767。）为了读取单个的数字，
     *使用带有`%1d`转换说明的scanf函数，其中`%1d`匹配只有一位的整数
     */
    printf("Enter the first (single) digit: ");
    scanf("%1d",&d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n",9 - ((total - 1) % 10));

    return 0;
}
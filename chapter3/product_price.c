/**
 * Created by pvnk1u on 2024/6/24.
 * 编写一个程序，对用户录入的产品信息进行格式化。实现如下效果
 Enter item number:583
 Enter unit price:1234
 Enter purchase date (mm/dd/yyyy):24/10/2010

 Item           Unit            Purchase
                Price           Date
 583            $   13.50       24/10/2010
 */


#include <stdio.h>

int main(void) {
      int item, year, month, day;
      float price;

      printf("Enter item number: ");
      scanf("%d", &item);

      printf("Enter unit price: ");
      scanf("%f", &price);

      printf("Enter purchase date (mm/dd/yyyy): ");
      scanf("%d /%d /%d", &month, &day, &year);

      printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
      printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);

      return 0;
}
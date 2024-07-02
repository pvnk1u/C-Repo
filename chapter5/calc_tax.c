/*
 Created by pvnk1u on 2024/7/2.

 在美国的某个州，单身居民需要担负下面表格列出的所得税

| 收入（美元） | 税金                               |
| ------------ | ---------------------------------- |
| 未超过750    | 收入的1%                           |
| 750~2250     | 7.50美元加上超出750美元部分的2%    |
| 2250~3750    | 37.50美元加上超出2250美元部分的3%  |
| 3750~5250    | 82.50美元加上超出3750美元部分的4%  |
| 5250~7000    | 142.50美元加上超出5250美元部分的5% |
| 超过7000     | 230.00美元加上超出7000美元部分的6% |

编写一个程序，要求用户输入需纳税的收入，然后显示税金

*/

#include <stdio.h>

int main(void) {
    float salary;
    printf("Enter your salary: ");
    scanf("%f",&salary);
    float basisTax = 0.0f;
    float percent = 0.0f;
    float noTaxAmount = 0.0f;
    if (salary <= 750) {
        basisTax = 0.0f;
        percent = 0.01f;
        noTaxAmount = 0;
    }else if(salary > 750 && salary <= 2250) {
        basisTax = 7.5f;
        percent = 0.02f;
        noTaxAmount = 750;
    }else if(salary > 2250 && salary <= 3750) {
        basisTax = 37.5f;
        percent = 0.03f;
        noTaxAmount = 2250;
    } else if(salary > 3750 && salary <= 5250) {
        basisTax = 82.5f;
        percent = 0.04f;
        noTaxAmount = 3750;
    }else if(salary > 5250 && salary <= 7000) {
        basisTax = 142.5f;
        percent = 0.05f;
        noTaxAmount = 5250;
    }else if(salary > 7000) {
        basisTax = 230.0f;
        percent = 0.02f;
        noTaxAmount = 7000;
    }
    printf("Your Tax amount:%f",(salary - noTaxAmount) * percent + basisTax);
    return 0;
}
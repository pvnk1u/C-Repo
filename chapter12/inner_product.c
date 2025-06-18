/**
 *  编写下列函数：
 *  double inner_product(const double *a, const double *b,int n);
 *  a和 b都指向长度为 n的数组。函数返回 a[0]*b[0]+a[1]*b[1]+...+a[n-1]*b[n-1]。要求使用指
 *  针算术运算而不是取下标来访问数组元素。
 */

#include <stdio.h>

double inner_product(const double *a, const double *b,int n);

int main(int argc, char const *argv[]){
    double a[] = {1.1,1.1,1.1};
    double b[] = {1.1,1.1,1.1};
    double result = inner_product(a,b,3);
    printf("%.2f",result);
    return 0;
}


double inner_product(const double *a, const double *b,int n){
    double result = 0.0;
    while (n-- > 0){
        result += *a++ * *b++;
    }
    return result;
}

/** 
 * 编写下列函数：
 * void split_time(int totalSec,int *hr,int *min,int *sec);
 * totalSec是以从午夜计算的秒数表示的时间。hr、min、sec都是指向变量的指针，
 * 这些变量在函数中将分别存储以小时（0～23）、分钟（0～59）和秒（0～59）为单位的等价时间
 */

#include <stdio.h>

void split_time(int totalSec,int *hr,int *min,int *sec);

int main(void){
    int totalSec = 3599;
    int hr,min,sec;
    split_time(totalSec,&hr,&min,&sec);
    printf("时：%d, 分：%d, 秒：%d",hr,min,sec);
    return 0;
}

void split_time(int totalSec,int *hr,int *min,int *sec){
    *hr = totalSec/3600;
    *min = (totalSec-3600 * *hr) / 60;
    *sec = totalSec - (*hr * 3600 + *min *60);
}
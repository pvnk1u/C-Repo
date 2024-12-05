/*
 Created by pvnk1u on 2024/12/5.
*/

struct InitMember {
    int first;
    double second;
    char *third;
    float four;
} test2,test3;

int main() {
    // 第一种声明方式，定义时直接顺序赋值，赋值顺序按照struct中声明的顺序
    struct InitMember test = {-10,3.141590,"method one",0.25};
    // 第二种声明方式 先定义，定义后赋值
    struct InitMember test1;
    test1.first = -10;
    test1.second = 3.131590;
    test1.third = "method one";
    test1.four = 0.25;
    // 定义时乱序赋值(C风格)，字段顺序可以不按struct中的来
    struct InitMember test2 = {
        .second = 3.141590,
        .third = "method one",
        .first = -10,
        .four = 0.25
    };

}
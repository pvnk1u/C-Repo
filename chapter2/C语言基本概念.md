# C语言基本概念 



## 编译和链接



虽然pun.c程序十分简短，但是为运行这个程序而包含的内容可能比想象的多。

需要把程序转换为机器可以执行的格式。对于C程序来说，通常包含3个步骤：

1. 预处理

   首先程序会被送交给预处理器（preprocessor）。预处理器执行以#开头的命令（通常称为指令）。预处理器有点类似于编辑器，它可以给程序添加内容，也可以对程序进行修改。

2. 编译

   修改后的程序现在可以进入编译器（compiler）了。编译器会把程序翻译成机器指令（即目标代码）。然而，这样的程序还是不能运行的。

3. 在最后一个步骤中，链接器（linker）把由编译器产生的目标代码和所需的其他附加代码整合到一起，这样才最终产生了完全可执行的程序。这些附加代码包括程序中用到的库函数（如printf函数）。



幸运的是，上述过程往往是自动实现的，事实上，由于预处理器通常会和编译器集成到一起，所以人们甚至可能不会注意到它在工作。



根据编译器和操作系统的不同，编译和链接所需的命令也是多种多样的。在UNIX系统环境下通常把C编译器命名为cc。为了编译和链接pun.c程序，需要在终端录入如下命令：

```shell
cc pun.c
```

在使用编译器cc时，系统会自动进行链接操作，而无需单独的链接命令。



在编译和链接好程序后，编译器会把可执行程序放到默认名为a.out的文件中。编译器cc有许多选项，其中有一个选项（-o选项）允许为含有可执行程序的文件选择名字。例如，假设要把pun.c生成的可执行文件命名为pun，那么只需要录入下列命令：

```shell
cc -o pun pun.c
```



GCC编译器是最流行的C编译器之一，它随Linux发行，但也有面向其他很多平台的版本。这种编译器的使用与传统的UNIX cc编译器类似。例如，编译程序pun.c可以使用如下命令：

```shell
gcc -o pun pun.c
```



## 简单程序的一般形式



### 指令

编译C程序之前，预处理器会首先对其进行编辑。我们把预处理器执行的命令称为指令。这里只关注`#include`指令。



程序`pun.c`由下列这行指令开始：

```c
#include <stdio.h>
```

这条指令说明，在编译前把`<stdio.h>`中的信息包含到程序中。



所有指令都是以字符#开始的。这个字符可以把C程序中的指令和其他代码区分开来。指令默认只占一行，每条指令的结尾没有分号或其他特殊标记。



### 函数

一个C程序可以包含多个函数，但只有main函数是必须有的。main函数是非常特殊的：在执行程序时系统会自动调用main函数。



main函数会在程序终止时向操作系统返回一个状态码。再来看下`pun.c`程序：

```c
#include <stdio.h>

int main(void) {
    printf("To C,or not to C: that is the question.\n");
    return 0;
}

```

main前面的int表明该函数将返回一个整数值。圆括号中的void表明main函数没有参数。语句`return 0;`有两个作用：一是使main函数终止（从而程序结束），二是指出main函数的返回值是0。后面会详细讨论mian函数的返回值。现在始终先让main函数的返回值为0，这个值表示程序正常终止。



## 变量和赋值

大多数程序在产生输出之前需要执行一系列计算，因此需要在程序执行过程中有一种临时存储数据的方法。和大多数编程语言一样，C语言中的这类存储单元被称为变量（variable）。



### 类型

每一个变量都必须有一个类型。C拥有广泛多样的类型。现在先只限定在两种类型范围内：int类型和float类型。由于类型会影响变量的存储方式以及允许对变量进行的操作，所以选择合适的类型是非常关键的。数值型变量的类型决定了变量所能存储的最大值和最小值，同时也决定了是否允许在小数点后出现数字。



int型变量可以存储整数，但是整数的取值范围是受限制的。最大的整数通常是2147483647。



float型变量可以存储比int型变量大得多的数值。而且，float型变量可以存储带小数位的数，但进行算术运算时float型变量通常比int型变量慢；更重要的是，float型变量所存储的数值往往只是实际数值的一个近似值。如果在一个float型变量中存储0.1，以后可能会发现变量的值变为0.09999999999999999997，这是舍入造成的误差。



### 显示变量的值

用printf可以显示出变量的当前值。以

Height: h

为例，可以通过如下的printf调用来输出上述信息：

```c
printf("Height: %d\n",height)
```

占位符%d用来指明在显示过程中变量height的值的显示位置。注意，由于在%d后面放置了\n，所以printf在显示完height的值后会跳到下一行。



%d仅用于int型变量。如果要显示float型变量，需要用%f来代替%d。



### 计算箱子的空间重量

运输公司特别不喜欢又大又轻的箱子，因为箱子在卡车或飞机上要占据宝贵的空间。对于这类箱子，公司常常要求按照箱子的体积而不是重量来支付额外的费用。通常的做法是把体积除以166（每磅允许的立方英寸数）。如果除得的商（也就是箱子的空间重量）大于箱子的实际重量，那么运费就按照空间重量来计算。



假设运输公司准备编写一个计算箱子空间重量的程序。先编写一个计算特定箱子空间重量的程序来试试手，其中箱子的长、宽、高分别是12英寸、10英寸和8英寸。C语言中除法运算符用符号/表示。所以，很显然计算箱子空间质量的公式如下：

```c
weight = volume / 166;
```

这里的weight和volume都是整型变量，分别用来表示箱子的重量和体积。但是上面这个公式并不是我们需要的。在C语言中，如果两个整数相除，那么结果会被截短：小数点后的所有数字都会丢失。`12*10*8`的箱子体积是960立方英寸，960除以166的结果是5而不是5.783，这样使得重量向下取整；而运输公司则希望结果向上取整。一种解决方案是在除以166之前把体积数加上165：

```c
weight = (volume + 165) / 166;
```

这样，体积为166的箱子重量就为331/166，取整为1；而体积为167的箱子重量则为332/166，取整为2。下面是完整代码：

```c
#include <stdio.h>

int main(void) {
    int height,length,width,volume,weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume(cubic inches): %d\n",volume);
    printf("Dimensional weight (prounds): %d\n",weight);

    return 0;
}
```



### 初始化

当程序开始执行时，某些变量会被自动设置为零，而大多数变量则不会。没有默认值且尚未在程序中被赋值的变量是未初始化的。



如果试图访问未初始化的变量，可能会得到不可预知的结果，如2568或者其他同样没有意义的数值。



可以总是采用赋值的方法给变量赋初始值，但还有更简便的方法：在变量声明中加入初始值。例如：

```c
int height = 8;
```





## 读入输入

程序dweight.c并不十分有用，因为它仅可以计算出一个箱子的空间重量。为了改进程序，需要允许用户自行录入尺寸。



为了获取输入，就要用到scanf函数。它是C函数库中与printf相对应的函数。scanf中的字母f和printf中的字母f含义相同，都是表示“格式化”的意思。scanf函数和printf函数都需要使用格式串（format string）来指定输入或输出数据的形式。scanf函数需要知道将获得的输入数据的格式，而printf函数需要知道输出数据的显示格式。



为了读入一个int型值，可以使用下面的scanf函数调用：

```c
scanf("%d",&i); // read an integer;stores into i
```

其中，字符串"%d"说明scanf读入的是一个整数，而i是一个int型变量，用来存储scanf读入的输入。&运算符在这里很难解释清楚，现在只说明它在使用scanf函数时通常是（不总是）必需的。



读入一个float型值时，需要一个形式略有不同的scanf调用：

```c
scanf("%f",&x); // read a float value;stores into x
```

%f只用于float型变量，因此这里假设x是一个float型变量。字符串"%f"告诉scanf函数去寻找一个float格式的输入值（可以含有小数点，但不是必须有）。



下面是计算空间质量程序的一个改进版dweight.c。在这个版本的程序中，用户可以录入尺寸。注意，每一个scanf函数调用都紧跟在一个printf函数调用的后面。这样做可以提示用户何时输入，以及输入什么。

```c
#include<stdio.h>

int main(void){
    int height,length,width,volume,weight;

    printf("Enter height of box: ");
    scanf("%d",&height);
    printf("Enter length of box: ");
    scanf("%d",&length);
    printf("Enter width of box: ");
    scanf("%d",&width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume(cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);

    return 0;
}

```



提示用户输入的信息（提示符）通常不应以换行符结束，因为我们希望用户在同一行输入。这样，当用户敲回车键时，光标会自动移动到下一行，因此就不需要程序通过显示换行符来终止当前行了。



dweight2.c还存在一个问题：如果用户输入的不是数值，程序就会出问题。



## 定义常量的名字

当程序含有常量时，建议给这些常量命名。程序dweight.c和程序dweight2.c都用到了常量166。在后期阅读程序时也许有些人会不明白这个常量的含义。所以可以采用称为宏定义（macro defination）的特性给常量命名：

```c
#define INCHES_PER_POUND 166
```

这里的#define是预处理指令，类似于前面所讲的#include，因而在此行的结尾也没有分号。



当对程序进行编译时，预处理器会把每一个宏替换为其表示的值。例如，语句

```c
weight = (volume +INCHES_PER_POUND -1 ) /INCHES_PER_POUND;
```

将变为：

```c
weight = (volume + 166 - 1) / 166
```

效果就如同在前一个地方写的是最后一条语句。



此外，还可以利用宏来定义表达式：

```c
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
```

**当宏包含运算符时，必须用括号把表达式括起来。**



### 华氏温度转换为摄氏温度

下面的程序提示用户输入一个华氏温度，然后输出一个对应的摄氏温度。此程序的输出格式如下（跟前面的例子一样，用户的输入信息用下划线标注出来）：

```c
Enter Fahrenheit temperature: 212
Celsius equivalent: 100.0
```

这段程序允许温度值不是整数，这也是摄氏温度显示为100.0而不是100的原因。



完整程序：

```c
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit,celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	// 使用%.1f显示celsius的值时，小数点后只显示一位数字
    printf("Celsius equivalent: %.1f\n",celsius);
    return 0;
}
```

语句

```c
celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
```

把华氏温度转换为相应的摄氏温度。因为FREEZING_PT表示的是常量32.0f，而SCALE_FACTOR表示的是表达式（5.0f / 9.0f），所以编译器会把这条语句看成是：

```c
celsius = (fahrenheit - 32.0f) * (5.0f / 9.0f);
```

在定义SCALE_FACTOR时，表达式采用（5.0f / 9.0f）的形式而不是(5 / 9)的形式，这一点非常重要，因为如果两个整数相除，那么C语言会对结果向下取整。表达式(5/9)的值将为0，这并不是我们想要的。



最后的printf函数调用输出相应的摄氏温度：

```c
printf("Celsius equivalent: %.1f\n",celsius);
```

注意，使用%.1f显示celsius的值时，小数点后只显示一位数字。

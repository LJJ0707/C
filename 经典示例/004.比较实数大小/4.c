/* 输入两个浮点数，输出它们中的大数 */
#include <stdio.h>
 int main()
{
	float x,y,c;				/* 变量定义 */
	printf("Please input x and y:\n");	/* 提示用户输入数据 */
	scanf("%f%f",&x,&y);
	c=x>y?x:y;				/* 计算c=max(x,y) */   //三元运算符
	printf("MAX of (%f,%f) is %f",x,y,c);	/* 输出c */
}
//
//举个例子，如果用户输入的是3.5和7.2，那么程序会输出：
//
//MAX of(3.500000, 7.200000) is 7.200000
//这样，你就用通俗的语言理解了这段代码的工作原理。
//
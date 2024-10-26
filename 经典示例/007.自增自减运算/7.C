/* 自增自减变量*/
#include <stdio.h>
main()
{
	int a=5,b,c,i=10;
	b=a++;//先用后加  a=a+1
	c=++b;//先加后用  b=b+1

	printf("a = %d, b = %d, c = %d\n",a,b,c);
	printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++);//这个代码不具有可读性，所以没有必要纠结
	printf("%d\n",++i);
	printf("%d\n",--i);
	printf("%d\n",i++);
	printf("%d\n",i--);
	printf("%d\n",-i++);
	printf("%d\n",-i--);
	getchar();
}
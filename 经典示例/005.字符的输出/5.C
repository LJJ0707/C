/* */
#include <stdio.h>
int main()
{
	//1.变量声明
	char ch,nch;	/*ch用来表示存储当前读取的字符，nch表示用来存储紧跟在数字字符后面的字符。 */
	int count;	/* */
	int k;		/* */
	//2.用户输入提示
	printf("Please input a string with a # in the end.\n");  //请输入一个末尾有#的字符串
	scanf("%c",&ch);	/* */

	//3.读取和处理数字字符
	while(ch != '#')	/* ch这个字符变量如果是'#'循环会停止*/
	{
		if(ch >= '0' && ch <= '9')  //从1-9之间任意选择一个数，判断ch是不是一个数字字符
		{
			/* */
			count = ch-'0'+1;	/* 如果是数字字符就会计算count的值，将其转成对应的整数，1可能是多余的，也可能是为了调整逻辑*/
			scanf("%c",&nch);	/*这里的nch是为了读取紧跟在数字字符后面的字符 */
			for(k=0;k<count;k++)	/*已经知道了nch是为了存储紧根在数据字符后面的字符，这里是将nch打印count次 */
				printf("%c",nch);
		}
		else//4.非数字字符的处理
			printf("%c",ch);	/*如果不是数字字符就直接打印 */
		printf(" ");			/*分隔 */
		scanf("%c",&ch);		/* 再次读取字符进行循环迭代*/
	}
	printf("#\n");				/*为了使循环结束 */
}
//11111111111222222
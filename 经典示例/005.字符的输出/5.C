/* */
#include <stdio.h>
main()
{
	//定义变量，一个字符型和两个整型
	char ch,nch;	/*ch用来表示存储当前读取的字符，nch表示用来存储紧跟在数字字符后面的字符。 */
	int count;	/* */
	int k;		/* */

	printf("Please input a string with a # in the end.\n");  //请输入一个末尾有#的字符串
	scanf("%c",&ch);	/* 请输入一个字符类型*/
	while(ch != '#')	/* ch这个字符变量如果是'#'循环会停止*/
	{
		if(ch >= '0' && ch <= '9')  //
		{
			/* */
			count = ch-'0'+1;	/* */
			scanf("%c",&nch);	/* */
			for(k=0;k<count;k++)	/*循环 */
				printf("%c",nch);
		}
		else
			printf("%c",ch);	/* */
		printf(" ");			/* */
		scanf("%c",&ch);		/* */
	}
	printf("#\n");				/* */
}

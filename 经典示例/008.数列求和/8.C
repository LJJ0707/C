#include <stdio.h>
main()
{
	int i,j,n;
	long sum=0,temp=0;

	printf("Please input a number to n:\n");//请在n中输入一个数字
	scanf("%d",&n) 
	if(n<1)
	{
		printf("The n must no less than 1!\n");  //这个n必须不小于1,这个是用于打印一条错误信息
		return;
	}

	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=1;j<=i;j++)
			temp+=j;  //temp=temp+j ,计算从1加到i的自然数累加和
		sum+=temp;  //sum=sum+temp,计算每个的i累加和加到总和中
	}
	printf("The sum of the sequence(%d) is %d\n",n,sum);
	getchar();
	getchar();
}
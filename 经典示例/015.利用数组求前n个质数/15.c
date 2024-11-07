#define N 50 //表示要计算质数的数量
main()
{
	int primes[N];  //定义一个数组来储存质数
	int pc,m,k;  //PC用于表示跟踪当前质数的数量，m用于测试是否为质数，k用于循环遍历已知道质数

	clrscr();
	printf("\n The first %d prime numbers are:\n",N); //前%d个素数是
	primes[0]=2;//2是第一个质数直接存入数组
	pc             =1;/*已有第一个质数，所以pc的初始化长度记为1
	m               =3;/*由于2是第一个质数，所以被测试的数从3开始*/
	while(pc<N)//循环直到找到N个质数
	{
	 /*调整m使它为下一个质数*/
	k=0;//重置k用于遍历已知数组
	while(primes[k]*primes[k]<=m)   //这个循环用于检测m是否为质数 //若m是一个合数（即非质数），则它必定有一个因子不大于其平方根
		if(m%primes[k]==0)  //做一个判断就是m如果被质数整除，则m不是质数
		{/*m是合数*/
		    m+=2;/*让m取下一个奇数*/  //因为除了2以外的质数都是奇数
		    k=1;/*不必用primes[0]=2去测试m，所以k从一开始*/
			break;
		}
		else {
			k++;
		}/*继续用下一个质数去测试*/
	primes[pc++]=m;
	m+=2;/*除2外，其余质数均是奇数*/
	
	/*输出primes[0]至primes[pc-1]*/
	for(k=0;k<pc;k++)   //这个循环用于遍历质数
		printf("%4d",primes[k]);
	printf("\n\n Press any key to quit...\n ");
	getch();
}
#include <stdio.h>
void main()  //模拟ATM机
{
	char SelectKey,CreditMoney,DebitMoney;
	while(1) //无限循环
	{
		do{
			clrscr();  //这个函数是为了让用户不需要按回车键
			puts("=========================");
			puts("|  Please select key:   |");
			puts("|  1. Quary             |");//查询
			puts("|  2. Credit            |");//存款
			puts("|  3. Debit             |");//取款
			puts("|  4. Return            |");//退出
			puts("=========================");
			SelectKey = getch();
		}while( SelectKey!='1' && SelectKey!='2' && SelectKey!='3' && SelectKey!='4' );
		switch(SelectKey)//switch可以用于表示多个if else
		{
			case '1':  
				clrscr();
				puts("================================");
				puts("|    Your balance is $1000.    |");
				puts("|  Press any key to return...  |");
				puts("================================");
				getch();//这个函数用于从控制台读取一个字符不需要回车键
				break;
			case '2':
				do{
					clrscr();
					puts("==================================");
					puts("|   Please select Credit money:  |");
					puts("|   1. $50                       |");
					puts("|   2. $100                      |");
					puts("|   3. Return                    |");
					puts("==================================");
					CreditMoney = getch();
				}while( CreditMoney!='1' && CreditMoney!='2' && CreditMoney!='3' );
				switch(CreditMoney)
				{
					case '1':
						clrscr();
						puts("=========================================");
						puts("|  Your Credit money is $50,Thank you!  |");
						puts("|         Press any key to return...    |");
						puts("=========================================");
						getch();
						break;
					case '2':
						clrscr();
						puts("==========================================");
						puts("|  Your Credit money is $100,Thank you!  |");
						puts("|         Press any key to return...     |");
						puts("==========================================");
						getch();
						break;
					case '3':
						break;
				}
				break;
			case '3':
				do{
					clrscr();
					puts("====================================");
					puts("|   Please select Debit money:     |");
					puts("|   1. $50                         |");
					puts("|   2. $100                        |");
					puts("|   3. $500                        |");
					puts("|   4. $1000                       |");
					puts("|   5. Return                      |");
					puts("====================================");
					DebitMoney = getch();
				}while(	DebitMoney!='1' && DebitMoney!='2' && DebitMoney!='3' \
				 && DebitMoney!='4' && DebitMoney!='5' );
				switch(DebitMoney)
				{
					case '1':
						clrscr();
						puts("===========================================");
						puts("|   Your Debit money is $50,Thank you!    |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '2':
						clrscr();
 						puts("===========================================");
						puts("|   Your Debit money is $100,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '3':
						clrscr();
						puts("===========================================");
						puts("|   Your Debit money is $500,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '4':
						clrscr();
						puts("===========================================");
						puts("|   Your Debit money is $1000,Thank you!  |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '5':
						break;
				}
				break;
			case '4':
				clrscr();
				puts("================================");
				puts("|   Thank you for your using!  |");
				puts("|            Good bye!         |");
				puts("================================");
				return;
		}
	}
}
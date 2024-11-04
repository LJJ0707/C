/* 用二维数组实现矩阵的转置 */
#include <stdio.h>
//定义常量
#define ROW 3   //表示行数  
#define COL 4   //表示列数
int main()
{
	int matrixA[ROW][COL],matrixB[COL][ROW];//声明一个三行四列二维数组，用于储存原始矩阵，
	                                        //声明一个四行三列的二维数组，用于储存转置后的数组
	int i,j;

	clrscr();//用于清屏
	printf("Enter elements of the matrixA,");//请输入矩阵A的元素
	printf("%d*%d:\n",ROW,COL);
	for( i=0; i<ROW; i++ )   //这个循环嵌套是读取用户的信息
	{
		for( j=0; j<COL; j++ )
		{
			scanf("%d",&matrixA[i][j]);
		}
	}

	for( i=0; i<ROW; i++ ) //这个循环嵌套是为了将矩阵A的元素转置到矩阵B中
	{
		for( j=0; j<COL; j++ )
		{
			matrixB[j][i] = matrixA[i][j];
		}
	}

	printf("MatrixB,");
	printf("%d*%d:\n",COL,ROW);
	for( i=0; i<COL; i++ ) //这个循环嵌套是为了打印转置后的矩阵B
	{
		for( j=0; j<ROW; j++ )
		{
			printf("%8d",matrixB[i][j]);
		}
		printf("\n");
	}
	printf("\n  Press Any Key to Quit...  \n");
	getch();
}



int sumNum(int n1, int n2) {

}

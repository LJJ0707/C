/* �ö�ά����ʵ�־����ת�� */
#include <stdio.h>
//���峣��
#define ROW 3   //��ʾ����  
#define COL 4   //��ʾ����
int main()
{
	int matrixA[ROW][COL],matrixB[COL][ROW];//����һ���������ж�ά���飬���ڴ���ԭʼ����
	                                        //����һ���������еĶ�ά���飬���ڴ���ת�ú������
	int i,j;

	clrscr();//��������
	printf("Enter elements of the matrixA,");//���������A��Ԫ��
	printf("%d*%d:\n",ROW,COL);
	for( i=0; i<ROW; i++ )   //���ѭ��Ƕ���Ƕ�ȡ�û�����Ϣ
	{
		for( j=0; j<COL; j++ )
		{
			scanf("%d",&matrixA[i][j]);
		}
	}

	for( i=0; i<ROW; i++ ) //���ѭ��Ƕ����Ϊ�˽�����A��Ԫ��ת�õ�����B��
	{
		for( j=0; j<COL; j++ )
		{
			matrixB[j][i] = matrixA[i][j];
		}
	}

	printf("MatrixB,");
	printf("%d*%d:\n",COL,ROW);
	for( i=0; i<COL; i++ ) //���ѭ��Ƕ����Ϊ�˴�ӡת�ú�ľ���B
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

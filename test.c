#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	for(int s = 0;s>63;s++)	
	{
		char kk[100];
	char ku[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	int zh[32], i = 0, w=4, j;
	long int b, y;
	y = s;
	{
		j = zh[i];
		printf("%c", ku[j]);
		kk[i] = ku[j];

	}
	//printf("\n");	 

	}
	return 0;
}
/*
#include<stdio.h>
int main()
{
 char ku[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 int zh[32],i=0,w,j;
 long int b,y;
 printf("请输入一个十进制数，我能帮您把它转换成2~16任意进制数：\n");
 scanf("%d",&y);
 b=y;
 printf("请输入要转换为的进制:");
 scanf("%d",&w);
 printf("\n");
 do
 {
  zh[i]=y%w;
  i++;
  y=y/w;
 }
 while(y!=0);
 printf("把十进制的%ld转换为%d进制:",b,w);
 for(i--;i>=0;i--)
 {
  j=zh[i];
  printf("%c",ku[j]);
 }
 printf("\n");
 return 0;
}
*/							

/*
char ku[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	int zh[32], i = 0,QUATERNARY = 4, j;	   //#define QUATERNARY 4; //4进制
	long int b;
	//printf("请输入一个十进制数，我能帮您把它转换成2~16任意进制数：\n");
	//scanf("%d", &y);
	b = y;
	//printf("请输入要转换为的进制:");
	//scanf("%d", &QUATERNARY);
	//printf("\n");
	do
	{
		zh[i] = y % QUATERNARY;
		i++;
		y = y / QUATERNARY;
	} while (y != 0);
	//printf("把十进制的%ld转换为%d进制:", b, QUATERNARY);
	for (i--;i >= 0;i--)
	{
		j = zh[i];
		printf("%c", ku[j]);
*/

//       新年快乐，虎快乐，生龙活虎，天天中大奖，月月升工资！

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include "add.h"

//			// -----------------------------------------------------------------------------------
//		//	①	//#递归#    接受一个整型值（无符号）按照顺序打印它的每一位  $-$-$	例如：输入：1234，输出 1 2 3 4				
//			// -----------------------------------------------------------------------------------
                                                                                                                                         //---------
 //void print(int n)//1234
 //{
 //	if(n>9)
 //	{
 //		print(n/10);
 //	}
 //	printf("%d ", n%10);
 //}
 // int main()
 //{
 //	unsigned int num = 0;		   //  unsigned int  无符号  整型
 //	scanf("%d", &num);//1234
 //	//递归
 //	print(num);
 //	//print(1234)
 //	//print(123) 4
 //	//print(12) 3 4
 //	//print(1) 2 3 4
 //	//
 //	return 0;
 //}
 // 
 // 
 // 





//			// -----------------------------------------------------------------------------------
//		//	②	//#递归#    编写函数不允许创建临时变量，求字符串的长度  $-$-$	模拟实现了一个strlen函数					
//			// -----------------------------------------------------------------------------------
																																		 //---------
//int my_strlen(char* str)					 //函数 my_strlen 允许创建临时变量 count 
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}				
//									  // #递归#
//int my_strlen2(char* str)			  //函数 my_strlen2 不允许创建临时变量 count/
//{
//										 //递归的方法
//	                                     //递归的方法  ,把大事化小
//	if(*str != '\0')					 //my_strlen("bit");
//		return 1+my_strlen2(str+1);      //1+my_strlen("it");
//	else                                 //1+1+my_strlen("t");
//		return 0;                        //1+1+1+my_strlen("")
//}                                        //1+1+1+0	
//										 //3
//											 
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen2(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//
//	return 0;
//}





//			// -----------------------------------------------------------------------------------
//		//	③	//    求n的阶乘  $-$-$	不考虑溢出							 
//			// -----------------------------------------------------------------------------------
																																		 //---------
//int Fac1(int n)				   //循环的方式
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)				   // #递归#
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//      //ret = Fac(n);//循环的方式
//	ret = Fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}





//			// -----------------------------------------------------------------------------------
//		//	④	//    求第n个斐波那契数（不考虑溢出）  $-$-$	斐波那契数列:  1 1 2 3 5 8 13 21 34 55 ....							  
//			// -----------------------------------------------------------------------------------
																																		 //---------
  //
//  //描述第n个斐波那契数的时候
//int count = 0;	 //计算次数
//int Fib(int n)
//{
//	if(n==3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//
////50
////49 48
////48 47 47 46
////47 46 46 45 46 45 45 44
 //
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}




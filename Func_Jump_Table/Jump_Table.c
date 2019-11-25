/*
*****************************************************
* 文件名：Jump_Table.c
* 作  者：wenzi
* 日  期：2019/11/23
* 版  本：v1.0
******************************************************
*/

#include "Jump_Table.h"
#include "stdio.h"
#include "stdlib.h"

op_struct Op_Num[] = 
{
	{OP_ADD,ADD},
	{OP_SUB,SUB},
	{OP_MUL,MUL},
	{OP_DIV,DIV}
};

/*两数相加函数*/
double ADD(double num1,double num2)
{
    double result;
	result = num1 + num2;
	return result;
}

/*两数相减*/
double SUB(double num1,double num2)
{
    double result;
	result = num1 - num2;
	return result;
}

/*两数相乘*/
double MUL(double num1,double num2)
{
    double result;
	result = num1 * num2;
	return result;
}

/*两数相除*/
double DIV(double num1,double num2)
{
    double result;
	result = num1 / num2;
	return result;
}

/*
************************************************
* 函数名：Cal
* 功  能：用函数转换表的思路计算两数的结果
* 形  参：OP_TYPE op： 操作符
          double num1：运算数
		  double num2: 运算数
* 返回值：运算的结果
************************************************
*/
double Cal(OP_TYPE op,double num1,double num2)
{
	double result;
	printf("%d\n",sizeof(Op_Num));
	printf("%d\n",sizeof(op_struct));
    if((op >= OP_MAXNUM) && (op < 0))
	{
	    printf("The input of op is error");
	}
	result = Op_Num[op].Op_Func(num1,num2);
	return result;
}
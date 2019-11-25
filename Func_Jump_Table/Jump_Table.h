/*
*****************************************************
* 文件名：Jump_Table.c
* 作  者：wenzi
* 日  期：2019/11/23
* 版  本：v1.0
******************************************************
*/

#ifndef __JUMP_TABLE_H__
#define __JUMP_TABLE_H__

#include "stdio.h"
#include "stdlib.h"

/*操作符的类型*/
typedef enum
{
    OP_ADD = 0,
	OP_SUB,
	OP_MUL,
	OP_DIV,
}OP_TYPE;

/*声明函数指针*/
typedef double (*OP_FUNC)(double,double);

/*两数计算的相关函数*/
double ADD(double num1,double num2);
double SUB(double num1,double num2);
double MUL(double num1,double num2);
double DIV(double num1,double num2);
double Cal(OP_TYPE op,double num1,double num2);

/*定义函数转换表的结构体的类型*/
typedef struct op_struct
{
	OP_TYPE Op_Stype;
	OP_FUNC Op_Func;
}op_struct;

/*声明函数转换表*/
extern op_struct Op_Num[];


#define OP_MAXNUM  sizeof(Op_Num)/sizeof(op_struct)
#endif
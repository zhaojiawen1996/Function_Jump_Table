/*
*****************************************************
* �ļ�����Jump_Table.c
* ��  �ߣ�wenzi
* ��  �ڣ�2019/11/23
* ��  ����v1.0
******************************************************
*/

#ifndef __JUMP_TABLE_H__
#define __JUMP_TABLE_H__

#include "stdio.h"
#include "stdlib.h"

/*������������*/
typedef enum
{
    OP_ADD = 0,
	OP_SUB,
	OP_MUL,
	OP_DIV,
}OP_TYPE;

/*��������ָ��*/
typedef double (*OP_FUNC)(double,double);

/*�����������غ���*/
double ADD(double num1,double num2);
double SUB(double num1,double num2);
double MUL(double num1,double num2);
double DIV(double num1,double num2);
double Cal(OP_TYPE op,double num1,double num2);

/*���庯��ת����Ľṹ�������*/
typedef struct op_struct
{
	OP_TYPE Op_Stype;
	OP_FUNC Op_Func;
}op_struct;

/*��������ת����*/
extern op_struct Op_Num[];


#define OP_MAXNUM  sizeof(Op_Num)/sizeof(op_struct)
#endif
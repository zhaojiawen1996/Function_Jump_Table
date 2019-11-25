/*
*****************************************************
* �ļ�����Jump_Table.c
* ��  �ߣ�wenzi
* ��  �ڣ�2019/11/23
* ��  ����v1.0
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

/*������Ӻ���*/
double ADD(double num1,double num2)
{
    double result;
	result = num1 + num2;
	return result;
}

/*�������*/
double SUB(double num1,double num2)
{
    double result;
	result = num1 - num2;
	return result;
}

/*�������*/
double MUL(double num1,double num2)
{
    double result;
	result = num1 * num2;
	return result;
}

/*�������*/
double DIV(double num1,double num2)
{
    double result;
	result = num1 / num2;
	return result;
}

/*
************************************************
* ��������Cal
* ��  �ܣ��ú���ת�����˼·���������Ľ��
* ��  �Σ�OP_TYPE op�� ������
          double num1��������
		  double num2: ������
* ����ֵ������Ľ��
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
#include "stdio.h"
#include "Jump_Table.h"

/*�ڴ�ע��double�������������ʹ��%lf*/
/*�������ʹ��%f*/
int main(void)
{
	double num1,num2,result;
	printf("please input two number:\n");
	scanf("%lf %lf",&num1,&num2);
	result = Cal(OP_ADD,num1,num2);
	printf("The result is��%f\n",result);
}
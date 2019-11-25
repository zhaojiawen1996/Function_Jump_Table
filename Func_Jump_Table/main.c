#include "stdio.h"
#include "Jump_Table.h"

/*在此注意double型数据输入必须使用%lf*/
/*输出必须使用%f*/
int main(void)
{
	double num1,num2,result;
	printf("please input two number:\n");
	scanf("%lf %lf",&num1,&num2);
	result = Cal(OP_ADD,num1,num2);
	printf("The result is：%f\n",result);
}
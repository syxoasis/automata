#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void function_test(int flag)
{
	printf("the flag is:%d\n",flag );
	return;
}

int main(int argc, char * argv[])
{
	int flag = 0;
	if(flag == 1)
		printf("this is a test\n", );
	else
		printf("hello world\n");
	function_test(flag);
}

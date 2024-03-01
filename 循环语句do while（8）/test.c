//编写代码实现，模拟用户登录情景，并且只能登录三次
//只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
#include <string.h>//字符串函数

int main()
{
	int i = 0;
	//假设正确的密码是字符串"123456"

	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		//if(password == "123456")//err - 两个字符串比较，不能使用==，应该使用strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入!\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;

}

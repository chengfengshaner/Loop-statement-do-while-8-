//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
#include <string.h>//�ַ�������

int main()
{
	int i = 0;
	//������ȷ���������ַ���"123456"

	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		//if(password == "123456")//err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������!\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;

}

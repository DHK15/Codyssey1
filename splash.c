#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void main()
{
	char minus[1], name[16];
	int y, m, d;
	printf("[���� ��¥�� ""yyyy - mm - dd"" �������� �Է��ϼ���] : ");
	scanf_s("%d", &y);
	scanf_s("%s", &minus,1);
	scanf_s("%d",&m);
	scanf_s("%s", &minus,1);
	scanf_s("%d",&d);

	printf("[����� �̸��� �Է��ϼ���]:");
	scanf_s("%s", &name, 16);

	printf(" * *�Է��� ���������� ó���Ǿ����ϴ�.* *\n");

	
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");	
	printf("                         [���׶��׾� ver 0.1]                              \n");
	printf("           Ǯ �� ���� ���� Ȳ�������� ��¦�̴� �༺�� ���鳻�� �� ���׶��׾�,         \n");
	printf("         ������� ���� ���ϴ� ������� ã�� �������� �ձ��� ���� ������ ���� ��,    \n");
	printf("           ���׶��׾ƿ� ���Ű� ȯ���մϴ�.""   \n\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("[�����]: %s					[����Ⱓ]:%d�� %d�� %d��\n\n\n\n", name,y,m,d);

	//���ʽ�
	Sleep(3000);
	system("cls");

	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");	
	//���� ��
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		//���� ���
		if (i == 0)			printf("                      [���׶��׾� ver 0.1]                                       ");
		else if (i == 1)		printf("        Ǯ �� ���� ���� Ȳ�������� ��¦�̴� �༺�� ���鳻�� �� ���׶��׾�,       ");
		else if (i == 2)		printf("      ������� ���� ���ϴ� ������� ã�� �������� �ձ��� ���� ������ ���� ��,    ");
		else if (i == 3)	printf("        ���׶��׾ƿ� ���Ű� ȯ���մϴ�.                                          ");
		else if (i == 4)		printf("                                                                                 ");
		//���� ��
		for (int k = 0; k < 5 - i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("[�����]: %s					[����Ⱓ]:%d�� %d�� %d��\n", name, y, m, d);
	
	return 0;
}
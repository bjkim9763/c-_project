#include <stdio.h>

int main(void)
{//����4
	int i;
	char c[3][3][20];
	const char* item[3] = { "�̸�", "��ȭ��ȣ", "�ּ�" };//�迭����

	for (i = 0; i < 3; i++) {
		printf("%s, %s, %s: ", item[0],item[1],item[2]);
		scanf("%s %s %s", c[i][0], c[i][1], c[i][2]);//�ݺ����� ���� �Է�
	}
	printf("\n\n\n");
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%s: %s\n", item[j], c[i][j]);
		}
		printf("\n");//�ݺ����� ���� ���
	}

	return 0;
}
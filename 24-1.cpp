#include <stdio.h>
//���� 1
int main(void) {
    FILE* fp = fopen("mystory.txt", "wt");//���� ����

    fputs("#�̸�: ������\n", fp);//���Ͽ� �����Է�
    fputs("#�ֹι�ȣ: 900208-1012589\n", fp);//���Ͽ� �����Է�
    fputs("#��ȭ��ȣ: 010-1111-2222\n", fp);//���Ͽ� �����Է�
    fclose(fp);//��Ʈ�� ����

    return 0;
}
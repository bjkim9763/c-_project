#include <stdio.h>
//���� 2
int main(void) {
    FILE* fp = fopen("mystory.txt", "a");//���� ���� ���� ���ٿ� ���� ���� a

    fputs("#��ܸԴ� ����: «��, ������\n", fp);//�����߰�
    fputs("#���: �౸\n", fp);//���� �߰�
    fclose(fp);//��Ʈ�� ����

    return 0;
}
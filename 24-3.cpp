#include <stdio.h>
//���� 3
int main(void) {
    FILE* fp = fopen("mystory.txt", "r");//���� ���� �б� ���� r
    char str[100];//�迭 ����

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf(str);
    }//null���� ���ö� ���� ������ ������ str�� �Է�
    // str�� ���

    fclose(fp);//��Ʈ�� ����

    return 0;
}
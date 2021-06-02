#include <stdio.h>

int main(void)
{//문제4
	int i;
	char c[3][3][20];
	const char* item[3] = { "이름", "전화번호", "주소" };//배열선언

	for (i = 0; i < 3; i++) {
		printf("%s, %s, %s: ", item[0],item[1],item[2]);
		scanf("%s %s %s", c[i][0], c[i][1], c[i][2]);//반복문을 통한 입력
	}
	printf("\n\n\n");
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%s: %s\n", item[j], c[i][j]);
		}
		printf("\n");//반복문을 통한 출력
	}

	return 0;
}
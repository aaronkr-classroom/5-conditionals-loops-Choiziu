// switch.c

#include <stdio.h>

int main(void) {
	int score;
	char grade;

	printf("작업 시작.\n");
	printf("점수를 입력하세요. >>> ");
	scanf_s("%d", &score);

	switch (score / 10) {
	case 10:
	case 9:
		grade = 'A'; break; // switch 에서 나가기.(종료)
	case 8:
		grade = 'B'; break;
	case 7:
		grade = 'C'; break;
	case 6:
		grade = 'D'; break;
	default:
		grade = 'F'; break;
	}

	printf("점수는 %d이고 등급은 %C입니다.\n", score, grade);
	printf("작업 종료.\n");

	// getch(); // 콘솔창 유지

	return 0;
}
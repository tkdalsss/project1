#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define RED 12
#define WHITE 15

#define LINE 8
#define MAX (LINE*4)

void Windows();
void Windows1();
void Lucky();
void Ladder();
void gotoxy(int x, int y);
void textcolor(int color_number);
int baserand(int x, int y);  // 랜덤 범위

void VerticalSet(int MAP[20][MAX]);
void HorizonSet(int MAP[20][MAX]);

void PrintLine(int MAP[20][MAX]);

void LadderStart(int MAP[20][MAX], int Select);


void gotoxy(int x, int y) {
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
void textcolor(int color_number) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);

}
void Windows() {
	system("color 2F");
	/* 0 - 검정 1 - 파랑 2 - 초록
	3 - 옥색 4 - 빨강 5 - 자주
	6 - 노랑 7 - 흰색 8 - 회색
	9 - 연한파랑 A - 연한 초록
	B - 연한 옥색 C - 연한 빨강
	D - 연한 자주 E - 연한 노랑
	F - 밝은 흰색*/
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□                                                                □\n");
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
}
void Windows1() {
	int a;

	gotoxy(15, 8);
	printf("프로그램");
	gotoxy(15, 10);
	printf("숫자를 입력하세요 : ( )");
	gotoxy(15, 12);
	printf("1. 행운의 숫자 맞추기");
	gotoxy(15, 14);
	printf("2. 사다리 타기");
	gotoxy(36, 10);
	scanf_s("%d", &a); // 숫자 입력

	if (a == 1) {
		system("cls");
		Lucky();
	}
	else if (a == 2) {
		system("cls");
		Ladder();
	}
	else {
		system("cls");
		Windows();
		Windows1();
	}
}
void Lucky() {

	Windows();

	system("Title Random_Lucky");

	srand((unsigned)time(NULL));

	int L1, L2, L3, L4, L5, L6, L7;
	int U1, U2, U3, U4, U5, U6, U7;
	int key1, key2;

	srand((unsigned)time(NULL));
	L1 = rand() % 100 + 1;
	L2 = rand() % 100 + 1;
	L3 = rand() % 100 + 1;
	L4 = rand() % 100 + 1;
	L5 = rand() % 100 + 1;
	L6 = rand() % 100 + 1;
	L7 = rand() % 1 + 1;

	gotoxy(15, 8);
	printf("1. 행운의 숫자 맞추기  ->  ( )");
	gotoxy(15, 10);
	printf("(1) 게임설명");
	gotoxy(15, 12);
	printf("(2) 게임시작");
	gotoxy(43, 8);
	scanf_s("%d", &key1);

	if (key1 == 1) {

		system("cls");
		Windows();

		gotoxy(8, 5);
		printf("- 게임 설명 -");
		Sleep(500);
		gotoxy(8, 7);
		printf("방식은 로또추첨과 유사합니다.");
		Sleep(700);
		gotoxy(8, 9);
		printf("1부터 99까지의 숫자 중에서 ");
		gotoxy(8, 11);
		printf("각기 다른 6개의 숫자를 입력하고");
		gotoxy(8, 13);
		printf("500까지의 숫자 중에서 히든넘버 하나를 추가로 입력합니다");
		Sleep(700);
		gotoxy(8, 15);
		printf("입력을 하고나면, 무작위로 추첨된 숫자와 비교하여");
		gotoxy(8, 17);
		printf("자신의 등수를 알려줍니다.");
		Sleep(1000);
		gotoxy(8, 20);
		printf("이전 화면으로 돌아가고 싶다면 1");
		gotoxy(8, 22);
		printf("종료하고 싶다면 아무숫자나 눌러주세요 -> ( )");
		gotoxy(50, 22);
		scanf_s("%d", &key2);

		if (key2 == 1) {
			system("cls");
			Lucky();
		}
	}
	else if (key1 == 2) {
		system("cls");
		Windows();

		gotoxy(8, 8);
		printf("* 행운의 숫자 맞추기 *");
		gotoxy(8, 10);
		printf("괄호 안에 숫자를 입력하세요 (1~100)");
		Sleep(700);
		gotoxy(8, 12);
		printf("(  )  (  )  (  )  (  )  (  )  (  )");
		gotoxy(9, 12);
		scanf_s("%d", &U1);
		gotoxy(15, 12);
		scanf_s("%d", &U2);
		if (U1 == U2) {
			gotoxy(8, 14);
			printf("중복된 숫자는 입력할 수 없습니다");
			gotoxy(8, 16);
			printf("이전화면으로 돌아갑니다");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(21, 12);
		scanf_s("%d", &U3);
		if (U2 == U3||U1==U3) {
			gotoxy(8, 14);
			printf("중복된 숫자는 입력할 수 없습니다");
			gotoxy(8, 16);
			printf("이전화면으로 돌아갑니다");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(27, 12);
		scanf_s("%d", &U4);
		if (U3 == U4||U1==U4||U2==U4) {
			gotoxy(8, 14);
			printf("중복된 숫자는 입력할 수 없습니다");
			gotoxy(8, 16);
			printf("이전화면으로 돌아갑니다");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(33, 12);
		scanf_s("%d", &U5);
		if (U4 == U5||U1==U5||U2==U5||U3==U5) {
			gotoxy(8, 14);
			printf("중복된 숫자는 입력할 수 없습니다");
			gotoxy(8, 16);
			printf("이전화면으로 돌아갑니다");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(39, 12);
		scanf_s("%d", &U6);
		if (U5 == U6||U1==U6||U2==U6||U3==U6||U4==U6) {
			gotoxy(8, 14);
			printf("중복된 숫자는 입력할 수 없습니다");
			gotoxy(8, 16);
			printf("이전화면으로 돌아갑니다");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(8, 14);
		printf("히든 넘버(1~500) : ( )");
		gotoxy(28, 14);
		scanf_s("%d", &U7);
		gotoxy(8, 16);
		printf("결과를 출력하는 중입니다. 잠시만 기다려 주세요");
		Sleep(1500);
		system("cls");
		if (U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6)
			&& U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) {
			Windows();
			gotoxy(8, 10);
			printf("1등입니다!\n");
		}
		else if (U7 == L7) {
			Windows();
			gotoxy(8, 10);
			printf("2등입니다!\n");
		}
		else if ((U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) ||
			(U3 == (L1 || L2 || L3 || L4 || L5 || L6) && U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6))) {
			gotoxy(8, 10);
			printf("3등입니다!");
		}
		else {
			Windows();
			gotoxy(8, 10);
			printf("아쉽네요");
			Sleep(1000);
			gotoxy(8, 12);
			printf("다음 기회를 노리세요\n");
		}
		system("pause");
	}
}
int baserand(int x, int y) {

	static int z = 0;
	int tmp;
	if (z == 0) {
		srand((int)time(NULL));
		rand(); rand(); rand(); rand();
		srand(rand());
		z = 1;
	}
	tmp = rand() % (y - x + 1) + x;
	return tmp;
}
void VerticalSet(int MAP[20][MAX]) {
	int i, j;
	for (i = 0; i < 20; i++) {
		for (j = 0; j < MAX; j++) {
			if (j % 4 == 0) {
				MAP[i][j] = 5; // j가 0,4,8,12,16 일때
			}
			else {
				MAP[i][j] = 0; // 나머지
			}
		}
	}
}
void HorizonSet(int MAP[20][MAX]) {
	int i, j;
	int x, y;
	for (i = 0; i < 20; i++) {
		x = baserand(0, LINE - 2) * 4;
		y = baserand(1, 19);
		if (MAP[y][x + 4] == 5 && MAP[y][x - 4] == 5) {
			j = x;
			MAP[y][j++] = 25;
			for (; j < x + 4; j++) {
				MAP[y][j] = 6;
			}
			MAP[y][j] = 23;
		}
	}
}
void PrintLine(int MAP[20][MAX]) {
	int i, j;
	for (i = 0; i < 20; i++) {
		for (j = 0; j < MAX; j++) {
			switch (MAP[i][j]) {
			case 0:
				printf(" ");
				break;
			case 6:
				printf("%c", MAP[i][j]);
				break;
			default:
				printf("%c", MAP[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i < LINE + 1; i++) {
		printf("%-4d", i);
	}
	printf("\n\n");
}
void LadderStart(int MAP[20][MAX], int Select) {
	int i;
	int x, y;
	x = Select * 4, y = 0;
	for (y = 0; y < 20; y++) {
		if (MAP[y][x] == 25) {
			for (i = x; i < x + 4; i++) {
				Sleep(200);
				gotoxy(i, y);
				textcolor(RED);
				printf("%c", MAP[y][i]);
			}
			x = i;
		}
		else if (MAP[y][x] == 23) {
			for (i = x; i > x - 4; i--) {
				Sleep(200);
				gotoxy(i, y);
				textcolor(RED);
				printf("%c", MAP[y][i]);
			}
			x = i;
		}
		Sleep(200);
		gotoxy(x, y);
		textcolor(RED);
		printf("%c", MAP[y][x]);
	}
	int Lad = x / 4 + 1;
	Sleep(2000);
	system("cls");
	Windows();
	gotoxy(15, 6);
	printf("%d번이 나왔네요! \n", Lad);
	Sleep(500);
	gotoxy(15, 9);
	printf("결과는??????");
	Sleep(1000);
	if (Lad == 1) {
		gotoxy(15, 11);
		printf("꽝!");
	}
	else if (Lad == 2) {
		gotoxy(15, 11);
		printf("당첨!");
	}
	else if (Lad == 3) {
		gotoxy(15, 11);
		printf("천하의 재수 없음");
	}
	else if (Lad == 4) {
		gotoxy(15, 11);
		printf("당첨될뻔함");
	}
	else if (Lad == 5) {
		gotoxy(15, 11);
		printf("당첨!");
	}
	else if (Lad == 6) {
		gotoxy(15, 11);
		printf("올해의 운을 여기다 다 써버림ㅜㅜ");
	}
	else if (Lad == 7) {
		gotoxy(15, 11);
		printf("당첨!");
	}
	else if (Lad == 8) {
		gotoxy(15, 11);
		printf("꽝!");
	}
	Sleep(1000);
	gotoxy(15, 14);
	printf("결과가 안좋게 나오더라도 실망하지 마세요!\n");
	system("pause");
}
void Ladder() {
	system("Title Random_Ladder");
	Windows();
	int value1, value2;
	gotoxy(15, 8);
	printf("2. 사다리타기 -> ( )");
	gotoxy(15, 10);
	printf("(1) : 게임설명");
	gotoxy(15, 12);
	printf("(2) : 게임시작");
	gotoxy(33, 8);
	scanf_s("%d", &value1);
	if (value1 == 1) {
		system("cls");
		Windows();
		gotoxy(8, 5);
		printf("* 게임 설명 *");
		Sleep(500);
		gotoxy(8, 7);
		printf("이 사다리타기에는 8개의 선택지가 있습니다.");
		gotoxy(8, 9);
		printf("8개의 선택지 중에서 1가지를 선택합니다.");
		Sleep(500);
		gotoxy(8, 11);
		printf("선택하고 나면 사다리타기가 진행되며");
		gotoxy(8, 13);
		printf("잠시 후 결과가 나옵니다.");
		gotoxy(8, 15);
		printf("결과는 각 번호에 따라 다양하게 나옵니다!");
		Sleep(1000);
		gotoxy(8, 17);
		printf("이전화면으로 돌아가려면 아무키나 누르세요 -> ( )");
		gotoxy(54, 17);
		scanf_s("%d", &value2);
		if (value2 == 100) {
			return;
		}
		else {
			system("cls");
			Ladder();
		}
	}
	if (value1 == 2) {
		void LadderMain(); {

			system("cls");
			Windows();

			int MAP[20][MAX];
			int Select;
			gotoxy(8, 8);
			printf("출발점 설정을 설정해 주세요! (1번 ~ %d번) :  번", LINE);
			gotoxy(8, 11);
			printf("*** 다양한 결과들이 기다리고 있습니다! ***");
			gotoxy(8, 13);
			printf("1. 꽝(*2)");
			gotoxy(20, 13);
			printf("2. 당첨(*3)");
			gotoxy(34, 13);
			printf("3. 당첨될뻔함(*1)");
			gotoxy(8, 15);
			printf("4. 올해의 운을 여기다 다 써버림ㅜㅜ(*1)");
			gotoxy(8, 17);
			printf("5. 천하의 재수 없음(*1)");
			gotoxy(51, 8);
			scanf_s("%d", &Select);
			Select--;
			system("cls");

			VerticalSet(MAP);
			HorizonSet(MAP);
			PrintLine(MAP);
			LadderStart(MAP, Select);

		}
	}
}
int main() {

	system("Title Random"); // 타이틀

	Windows(); // 기본화면
	Windows1();
}
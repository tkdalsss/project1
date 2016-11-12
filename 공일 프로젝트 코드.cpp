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
int baserand(int x, int y);  // ���� ����

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
	/* 0 - ���� 1 - �Ķ� 2 - �ʷ�
	3 - ���� 4 - ���� 5 - ����
	6 - ��� 7 - ��� 8 - ȸ��
	9 - �����Ķ� A - ���� �ʷ�
	B - ���� ���� C - ���� ����
	D - ���� ���� E - ���� ���
	F - ���� ���*/
	printf("�����������������������������������\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("��                                                                ��\n");
	printf("�����������������������������������\n");
}
void Windows1() {
	int a;

	gotoxy(15, 8);
	printf("���α׷�");
	gotoxy(15, 10);
	printf("���ڸ� �Է��ϼ��� : ( )");
	gotoxy(15, 12);
	printf("1. ����� ���� ���߱�");
	gotoxy(15, 14);
	printf("2. ��ٸ� Ÿ��");
	gotoxy(36, 10);
	scanf_s("%d", &a); // ���� �Է�

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
	printf("1. ����� ���� ���߱�  ->  ( )");
	gotoxy(15, 10);
	printf("(1) ���Ӽ���");
	gotoxy(15, 12);
	printf("(2) ���ӽ���");
	gotoxy(43, 8);
	scanf_s("%d", &key1);

	if (key1 == 1) {

		system("cls");
		Windows();

		gotoxy(8, 5);
		printf("- ���� ���� -");
		Sleep(500);
		gotoxy(8, 7);
		printf("����� �ζ���÷�� �����մϴ�.");
		Sleep(700);
		gotoxy(8, 9);
		printf("1���� 99������ ���� �߿��� ");
		gotoxy(8, 11);
		printf("���� �ٸ� 6���� ���ڸ� �Է��ϰ�");
		gotoxy(8, 13);
		printf("500������ ���� �߿��� ����ѹ� �ϳ��� �߰��� �Է��մϴ�");
		Sleep(700);
		gotoxy(8, 15);
		printf("�Է��� �ϰ���, �������� ��÷�� ���ڿ� ���Ͽ�");
		gotoxy(8, 17);
		printf("�ڽ��� ����� �˷��ݴϴ�.");
		Sleep(1000);
		gotoxy(8, 20);
		printf("���� ȭ������ ���ư��� �ʹٸ� 1");
		gotoxy(8, 22);
		printf("�����ϰ� �ʹٸ� �ƹ����ڳ� �����ּ��� -> ( )");
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
		printf("* ����� ���� ���߱� *");
		gotoxy(8, 10);
		printf("��ȣ �ȿ� ���ڸ� �Է��ϼ��� (1~100)");
		Sleep(700);
		gotoxy(8, 12);
		printf("(  )  (  )  (  )  (  )  (  )  (  )");
		gotoxy(9, 12);
		scanf_s("%d", &U1);
		gotoxy(15, 12);
		scanf_s("%d", &U2);
		if (U1 == U2) {
			gotoxy(8, 14);
			printf("�ߺ��� ���ڴ� �Է��� �� �����ϴ�");
			gotoxy(8, 16);
			printf("����ȭ������ ���ư��ϴ�");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(21, 12);
		scanf_s("%d", &U3);
		if (U2 == U3||U1==U3) {
			gotoxy(8, 14);
			printf("�ߺ��� ���ڴ� �Է��� �� �����ϴ�");
			gotoxy(8, 16);
			printf("����ȭ������ ���ư��ϴ�");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(27, 12);
		scanf_s("%d", &U4);
		if (U3 == U4||U1==U4||U2==U4) {
			gotoxy(8, 14);
			printf("�ߺ��� ���ڴ� �Է��� �� �����ϴ�");
			gotoxy(8, 16);
			printf("����ȭ������ ���ư��ϴ�");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(33, 12);
		scanf_s("%d", &U5);
		if (U4 == U5||U1==U5||U2==U5||U3==U5) {
			gotoxy(8, 14);
			printf("�ߺ��� ���ڴ� �Է��� �� �����ϴ�");
			gotoxy(8, 16);
			printf("����ȭ������ ���ư��ϴ�");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(39, 12);
		scanf_s("%d", &U6);
		if (U5 == U6||U1==U6||U2==U6||U3==U6||U4==U6) {
			gotoxy(8, 14);
			printf("�ߺ��� ���ڴ� �Է��� �� �����ϴ�");
			gotoxy(8, 16);
			printf("����ȭ������ ���ư��ϴ�");
			Sleep(2000);
			system("cls");
			Lucky();
		}
		gotoxy(8, 14);
		printf("���� �ѹ�(1~500) : ( )");
		gotoxy(28, 14);
		scanf_s("%d", &U7);
		gotoxy(8, 16);
		printf("����� ����ϴ� ���Դϴ�. ��ø� ��ٷ� �ּ���");
		Sleep(1500);
		system("cls");
		if (U1 == (L1 || L2 || L3 || L4 || L5 || L6) && U2 == (L1 || L2 || L3 || L4 || L5 || L6) && U3 == (L1 || L2 || L3 || L4 || L5 || L6)
			&& U4 == (L1 || L2 || L3 || L4 || L5 || L6) && U5 == (L1 || L2 || L3 || L4 || L5 || L6) && U6 == (L1 || L2 || L3 || L4 || L5 || L6)) {
			Windows();
			gotoxy(8, 10);
			printf("1���Դϴ�!\n");
		}
		else if (U7 == L7) {
			Windows();
			gotoxy(8, 10);
			printf("2���Դϴ�!\n");
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
			printf("3���Դϴ�!");
		}
		else {
			Windows();
			gotoxy(8, 10);
			printf("�ƽ��׿�");
			Sleep(1000);
			gotoxy(8, 12);
			printf("���� ��ȸ�� �븮����\n");
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
				MAP[i][j] = 5; // j�� 0,4,8,12,16 �϶�
			}
			else {
				MAP[i][j] = 0; // ������
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
	printf("%d���� ���Գ׿�! \n", Lad);
	Sleep(500);
	gotoxy(15, 9);
	printf("�����??????");
	Sleep(1000);
	if (Lad == 1) {
		gotoxy(15, 11);
		printf("��!");
	}
	else if (Lad == 2) {
		gotoxy(15, 11);
		printf("��÷!");
	}
	else if (Lad == 3) {
		gotoxy(15, 11);
		printf("õ���� ��� ����");
	}
	else if (Lad == 4) {
		gotoxy(15, 11);
		printf("��÷�ɻ���");
	}
	else if (Lad == 5) {
		gotoxy(15, 11);
		printf("��÷!");
	}
	else if (Lad == 6) {
		gotoxy(15, 11);
		printf("������ ���� ����� �� ������̤�");
	}
	else if (Lad == 7) {
		gotoxy(15, 11);
		printf("��÷!");
	}
	else if (Lad == 8) {
		gotoxy(15, 11);
		printf("��!");
	}
	Sleep(1000);
	gotoxy(15, 14);
	printf("����� ������ �������� �Ǹ����� ������!\n");
	system("pause");
}
void Ladder() {
	system("Title Random_Ladder");
	Windows();
	int value1, value2;
	gotoxy(15, 8);
	printf("2. ��ٸ�Ÿ�� -> ( )");
	gotoxy(15, 10);
	printf("(1) : ���Ӽ���");
	gotoxy(15, 12);
	printf("(2) : ���ӽ���");
	gotoxy(33, 8);
	scanf_s("%d", &value1);
	if (value1 == 1) {
		system("cls");
		Windows();
		gotoxy(8, 5);
		printf("* ���� ���� *");
		Sleep(500);
		gotoxy(8, 7);
		printf("�� ��ٸ�Ÿ�⿡�� 8���� �������� �ֽ��ϴ�.");
		gotoxy(8, 9);
		printf("8���� ������ �߿��� 1������ �����մϴ�.");
		Sleep(500);
		gotoxy(8, 11);
		printf("�����ϰ� ���� ��ٸ�Ÿ�Ⱑ ����Ǹ�");
		gotoxy(8, 13);
		printf("��� �� ����� ���ɴϴ�.");
		gotoxy(8, 15);
		printf("����� �� ��ȣ�� ���� �پ��ϰ� ���ɴϴ�!");
		Sleep(1000);
		gotoxy(8, 17);
		printf("����ȭ������ ���ư����� �ƹ�Ű�� �������� -> ( )");
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
			printf("����� ������ ������ �ּ���! (1�� ~ %d��) :  ��", LINE);
			gotoxy(8, 11);
			printf("*** �پ��� ������� ��ٸ��� �ֽ��ϴ�! ***");
			gotoxy(8, 13);
			printf("1. ��(*2)");
			gotoxy(20, 13);
			printf("2. ��÷(*3)");
			gotoxy(34, 13);
			printf("3. ��÷�ɻ���(*1)");
			gotoxy(8, 15);
			printf("4. ������ ���� ����� �� ������̤�(*1)");
			gotoxy(8, 17);
			printf("5. õ���� ��� ����(*1)");
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

	system("Title Random"); // Ÿ��Ʋ

	Windows(); // �⺻ȭ��
	Windows1();
}
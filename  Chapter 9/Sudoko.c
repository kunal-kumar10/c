#include<stdio.h>
#include<stdlib.h>
#include<termios.h>

#define FALSE 0
#define TRUE 1

//scan codes for arrow keys.
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

// void gotoxy(short, short);
void box(short, short, short, short);
int getkey();
int check(int *a);
void action(int key, int a[4][4]);
// void swap(int*, int*);

static struct termios old, new;

/* Initialize new terminal i/o settings */
void initTermios(int echo)
{
    tcgetattr(0, &old); //grab old terminal i/o settings
    new = old; //make new settings same as old settings
    new.c_lflag &= ~ICANON; //disable buffered i/o
    new.c_lflag &= echo ? ECHO : ~ECHO; //set echo mode
    tcsetattr(0, TCSANOW, &new); //apply terminal io settings
}

/* Restore old terminal i/o settings */
void resetTermios(void)
{
    tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo)
{
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}

/* 
Read 1 character without echo 
getch() function definition.
*/
char getch(void)
{
    return getch_(0);
}

void update(short x1, short y1, short x2, short y2, int *a)
{
	int i, j, num, k = 0;
	for (j = y1; j < y2; j++)//row
	{
		for (i = x1; i < x2; i++)//col
		{
			if (i > x1 && i < x2 && j > y1 && j < y2)
			{
				if ((i + 3) % 6 == 0 && j % 2 == 1)
				{
					gotoxy(i, j);
					num = a[k];
					if (num == 32)
						printf("  ");
					else
						printf("%d", num);
					k++;
				}
			}
		}
	}
}


int main()
{
    system("clear");
	int a[4][4] = {
		1, 4, 15, 7,
		8, 10, 2, 11,
		14, 3, 6, 13,
		12, 9, 5, 32
	};
	int key, flag = FALSE;

	printf("Arrange the numbes in ascending order.\nPress any key to start. . .\n");
    getch();
	gotoxy(30, 20);
// 	system("clear");//clrscr(); in TurboC++
	box(0, 0, 24, 8);
    while (flag == FALSE)//Game ends when flag becomes TRUE
	{
		update(0, 0, 24, 8, (int*)a);
		key = getkey();
		action(key, a);// It moves the numbers
		flag = check((int*)a);/*It make flag TRUE on completion of game*/
	}
	system("clear");
	gotoxy(30, 20);
	printf("\nYou've done it dude.!!\nExiting. . . ");
	getchar();
	getchar();
	return 0;
}


//It draw box.
void box(short x1, short y1, short x2, short y2)
{
	int i, j;
	for (i = x1; i <= x2; i++) // col
	{
		for (j = y1; j <= y2; j++) //row
		{
			/*====printing corners========*/
			if (i == x1 && j == y1)
			{
				gotoxy(i, j);
				printf("%c", -38);
			}
			if (i == x2 && j == y1)
			{
				gotoxy(i, j);
				printf("%c", -65);
			}
			if (i == x1 && j == y2)
			{
				gotoxy(i, j);
				printf("%c", -64);
			}
			if (i == x2 && j == y2)
			{
				gotoxy(i, j);
				printf("%c", -39);
			}
			/*================================*/


			if (i < x2 && i > x1)
			{
				if ((i) % 6 == 0)//Vertical division coerners
				{
					if (j == y1)
					{
						gotoxy(i, j);
						printf("%c", -62); //T
					}
					if (j == y2)
					{
						gotoxy(i, j);
						printf("%c", -63);//Reverse T
					}
					if (j == y1 + 2 || j == y1 + 4 || j == y1 + 6)
					{
						gotoxy(i, j);
						printf("%c", -59);//+
					}
				}
				else if (j % 2 == 0)// Horizontal line
				{
					gotoxy(i, j);
					printf("%c", -60);
				}
			}
		



			if (j > y1 && j < y2)
			{
				if ((j % 2 == 0))
				{
					if (i == x1)
					{
						gotoxy(i, j);
						printf("%c", -61);//Rotate left T
					}
					if (i == x2)
					{
						gotoxy(i, j);
						printf("%c", -76);//Rotate right T
					}
				}
				else if (i % 6 == 0)
				{
					gotoxy(i, j);
					printf("%c", -77);//Vertical lines
				}
			}
		}
	}
}



int getkey()
{
	int ch;
	ch = getch();
	if (ch == 0)
		ch = getch();
	return ch;
}

//It check if the puzzle is solved or not.
int check(int *a)
{
	int i;
	for (i = 0; i < 15; i++)
		if (a[i] > a[i + 1])
			return FALSE;
	return TRUE;
}

//It moves the number.
void action(int key, int a[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] == 32)
				goto BREAK;
BREAK:
	switch (key)
	{
	case RIGHT:
		if (j - 1 < 0) 
			return;
		swap(&a[i][j], &a[i][j - 1]);/*Moves the botton to right*/
		return;
	case DOWN:
		if (i - 1 < 0)
			return;
		swap(&a[i][j], &a[i - 1][j]);/*Moves the botton down*/
		return;
	case LEFT:
		if (j + 1 > 3)
			return;
		swap(&a[i][j], &a[i][j + 1]);/*Moves the botton left*/
		return;
	case UP:
		if (i + 1 > 3)
			return;
		swap(&a[i][j], &a[i + 1][j]);/*Moves the botton up*/
		return;
	default:
		return;
	}
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


#include<iostream>
#include<time.h>
#include<Windows.h>

using std::cin;
using std::cout;
using std::endl;

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}
void Mario(int x, int y)
{
	COORD pos = { x*2 ,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void main()
{
	// 1 19 ~ 34
	for (int i = 22; i <= 42; i++)
	{
		TextColor(4, 0);
		Mario(i, 1);
		cout << "■" << endl; 

	}

	// 2 
	for (int i = 22; i <= 42; i++)
	{
		TextColor(4, 0);
		Mario(i, 2);
		cout << "■" << endl;

	}

	//3 ~ 4
	for (int i = 19; i <= 56; i++)
	{
		TextColor(4, 0);
		Mario(i, 3);
		cout << "■" << endl;

	}
	for (int i = 19; i <= 56; i++)
	{
		TextColor(4, 0);
		Mario(i, 4);
		cout << "■" << endl;
	}
	//5
	for (int i = 19; i <= 30; i++)
	{
		TextColor(8, 0);
		Mario(i, 5);
		cout << "■" << endl;

	}
	for (int i = 31; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 5);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(0, 0);
		Mario(i, 5);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 47; i++)
	{
		TextColor(7, 0);
		Mario(i, 5);
		cout << "■" << endl;
	}

	//6
	for (int i = 19; i <= 30; i++)
	{
		TextColor(8, 0);
		Mario(i, 6);
		cout << "■" << endl;

	}
	for (int i = 31; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 6);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(0, 0);
		Mario(i, 6);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 47; i++)
	{
		TextColor(7, 0);
		Mario(i, 6);
		cout << "■" << endl;
	}

	//7  머리 8 피부 7
	for (int i = 15; i <= 18; i++)
	{
		TextColor(8, 0);
		Mario(i, 7);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 22; i++)
	{
		TextColor(7, 0);
		Mario(i, 7);
		cout << "■" << endl;
	}
	for (int i = 23; i <= 26; i++)
	{
		TextColor(8, 0);
		Mario(i, 7);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 7);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(0, 0);
		Mario(i, 7);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 56; i++)
	{
		TextColor(7, 0);
		Mario(i, 7);
		cout << "■" << endl;
	}
	//8
	for (int i = 15; i <= 18; i++)
	{
		TextColor(8, 0);
		Mario(i, 8);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 22; i++)
	{
		TextColor(7, 0);
		Mario(i, 8);
		cout << "■" << endl;
	}
	for (int i = 23; i <= 26; i++)
	{
		TextColor(8, 0);
		Mario(i, 8);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 8);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(0, 0);
		Mario(i, 8);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 56; i++)
	{
		TextColor(7, 0);
		Mario(i, 8);
		cout << "■" << endl;
	}
	//9
	for (int i = 15; i <= 18; i++)
	{
		TextColor(8, 0);
		Mario(i, 9);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 22; i++)
	{
		TextColor(7, 0);
		Mario(i, 9);
		cout << "■" << endl;
	}
	for (int i = 23; i <= 26; i++)
	{
		TextColor(8, 0);
		Mario(i, 9);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 9);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(0, 0);
		Mario(i, 9);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 56; i++)
	{
		TextColor(7, 0);
		Mario(i, 9);
		cout << "■" << endl;
	}
	//10
	//int yPo;
	//yPo = 10;
	
		for (int i = 15; i <= 18; i++)
	{
		TextColor(8, 0);
		Mario(i, 10);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 22; i++)
	{
		TextColor(7, 0);
		Mario(i, 10);
		cout << "■" << endl;
	}
	for (int i = 23; i <= 26; i++)
	{
		TextColor(8, 0);
		Mario(i, 10);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 10);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(0, 0);
		Mario(i, 10);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 56; i++)
	{
		TextColor(7, 0);
		Mario(i, 10);
		cout << "■" << endl;
	}

	//yPo + 1;
	//11
	for (int i = 15; i <= 18; i++)
	{
		TextColor(8, 0);
		Mario(i, 11);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 22; i++)
	{
		TextColor(7, 0);
		Mario(i, 11);
		cout << "■" << endl;
	}
	for (int i = 23; i <= 30; i++)
	{
		TextColor(8, 0);
		Mario(i, 11);
		cout << "■" << endl;
	}
	for (int i = 31; i <= 42; i++)
	{
		TextColor(7, 0);
		Mario(i, 11);
		cout << "■" << endl;
	}
	for (int i = 42; i <= 48; i++)
	{
		TextColor(8, 0);
		Mario(i, 11);
		cout << "■" << endl;
	}
	for (int i = 49; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 11);
		cout << "■" << endl;
	}
	//yPo + 1;
	//12
	for (int i = 15; i <= 18; i++)
	{
		TextColor(8, 0);
		Mario(i, 12);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 22; i++)
	{
		TextColor(7, 0);
		Mario(i, 12);
		cout << "■" << endl;
	}
	for (int i = 23; i <= 30; i++)
	{
		TextColor(8, 0);
		Mario(i, 12);
		cout << "■" << endl;
	}
	for (int i = 31; i <= 42; i++)
	{
		TextColor(7, 0);
		Mario(i, 12);
		cout << "■" << endl;
	}
	for (int i = 42; i <= 48; i++)
	{
		TextColor(8, 0);
		Mario(i, 12);
		cout << "■" << endl;
	}
	for (int i = 49; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 12);
		cout << "■" << endl;
	}

	//13
	for (int i = 19; i <= 21; i++)
	{
		TextColor(8, 0);
		Mario(i, 13);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 13);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 56; i++)
	{
		TextColor(8, 0);
		Mario(i, 13);
		cout << "■" << endl;
	}
	
	//14
	for (int i = 19; i <= 21; i++)
	{
		TextColor(8, 0);
		Mario(i, 14);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 14);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 56; i++)
	{
		TextColor(8, 0);
		Mario(i, 14);
		cout << "■" << endl;
	}
	//15
	for (int i = 19; i <= 21; i++)
	{
		TextColor(8, 0);
		Mario(i, 15);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 15);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 56; i++)
	{
		TextColor(8, 0);
		Mario(i, 15);
		cout << "■" << endl;
	}
	//16
	for (int i = 19; i <= 21; i++)
	{
		TextColor(8, 0);
		Mario(i, 16);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 16);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 56; i++)
	{
		TextColor(8, 0);
		Mario(i, 16);
		cout << "■" << endl;
	}
	//17
	for (int i = 19; i <= 21; i++)
	{
		TextColor(8, 0);
		Mario(i, 17);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 38; i++)
	{
		TextColor(7, 0);
		Mario(i, 17);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 56; i++)
	{
		TextColor(8, 0);
		Mario(i, 17);
		cout << "■" << endl;
	}
	// 18 
	
	for (int i = 22; i <= 48; i++)
	{
		TextColor(7, 0);
		Mario(i, 18);
		cout << "■" << endl;
	}
	//19
	for (int i = 22; i <= 48; i++)
	{
		TextColor(7, 0);
		Mario(i, 19);
		cout << "■" << endl;
	}
	//20
	for (int i = 19; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 20);
		cout << "■" << endl;
	}
	for (int i = 27; i <=30; i++)
	{
		TextColor(1, 0);
		Mario(i, 20);
		cout << "■" << endl;
	}
	for (int i = 31; i <= 38; i++)
	{
		TextColor(4, 0);
		Mario(i, 20);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 20);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 51; i++)
	{
		TextColor(4, 0);
		Mario(i, 20);
		cout << "■" << endl;
	}
	//21
	for (int i = 19; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 21);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 30; i++)
	{
		TextColor(1, 0);
		Mario(i, 21);
		cout << "■" << endl;
	}
	for (int i = 31; i <= 38; i++)
	{
		TextColor(4, 0);
		Mario(i, 21);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 21);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 51; i++)
	{
		TextColor(4, 0);
		Mario(i, 21);
		cout << "■" << endl;
	}

//22
	for (int i = 15; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 22);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 22);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 56; i++)
	{
		TextColor(4, 0);
		Mario(i, 22);
		cout << "■" << endl;
	}

//23
	for (int i = 15; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 23);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 23);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 56; i++)
	{
		TextColor(4, 0);
		Mario(i, 23);
		cout << "■" << endl;
	}


//24
	for (int i = 15; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 24);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 24);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 56; i++)
	{
		TextColor(4, 0);
		Mario(i, 24);
		cout << "■" << endl;
	}
//25
	for (int i = 10; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 25);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 25);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 59; i++)
	{
		TextColor(4, 0);
		Mario(i, 25);
		cout << "■" << endl;
	}
//26
	for (int i = 10; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 26);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 26);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 59; i++)
	{
		TextColor(4, 0);
		Mario(i, 26);
		cout << "■" << endl;
	}

//27
	for (int i = 10; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 27);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 27);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 59; i++)
	{
		TextColor(4, 0);
		Mario(i, 27);
		cout << "■" << endl;
	}
//28
	for (int i = 10; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 28);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 28);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 59; i++)
	{
		TextColor(4, 0);
		Mario(i, 28);
		cout << "■" << endl;
	}

//29
	for (int i = 10; i <= 26; i++)
	{
		TextColor(4, 0);
		Mario(i, 29);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 43; i++)
	{
		TextColor(1, 0);
		Mario(i, 29);
		cout << "■" << endl;
	}
	for (int i = 44; i <= 59; i++)
	{
		TextColor(4, 0);
		Mario(i, 29);
		cout << "■" << endl;
	}

//30
	for (int i = 10; i <= 18; i++)
	{
		TextColor(7, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 21; i++)
	{
		TextColor(4, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 26; i++)
	{
		TextColor(1, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 30; i++)
	{
		TextColor(6, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 31; i <= 38; i++)
	{
		TextColor(1, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(6, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 47; i++)
	{
		TextColor(1, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 48; i <= 51; i++)
	{
		TextColor(4, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	for (int i = 52; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 30);
		cout << "■" << endl;
	}
	//31
	for (int i = 10; i <= 18; i++)
	{
		TextColor(7, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 21; i++)
	{
		TextColor(4, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 26; i++)
	{
		TextColor(1, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 27; i <= 30; i++)
	{
		TextColor(6, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 31; i <= 38; i++)
	{
		TextColor(1, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 42; i++)
	{
		TextColor(6, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 43; i <= 47; i++)
	{
		TextColor(1, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 48; i <= 51; i++)
	{
		TextColor(4, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}
	for (int i = 52; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 31);
		cout << "■" << endl;
	}

//32
	for (int i = 10; i <= 21; i++)
	{
		TextColor(7, 0);
		Mario(i, 32);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 47; i++)
	{
		TextColor(1, 0);
		Mario(i, 32);
		cout << "■" << endl;
	}
	for (int i = 48; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 32);
		cout << "■" << endl;
	}

//33
	for (int i = 10; i <= 21; i++)
	{
		TextColor(7, 0);
		Mario(i, 33);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 47; i++)
	{
		TextColor(1, 0);
		Mario(i, 33);
		cout << "■" << endl;
	}
	for (int i = 48; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 33);
		cout << "■" << endl;
	}

//34
	for (int i = 10; i <= 21; i++)
	{
		TextColor(7, 0);
		Mario(i, 34);
		cout << "■" << endl;
	}
	for (int i = 22; i <= 47; i++)
	{
		TextColor(1, 0);
		Mario(i, 34);
		cout << "■" << endl;
	}
	for (int i = 48; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 34);
		cout << "■" << endl;
	}


	//35
	for (int i = 10; i <= 18; i++)
	{
		TextColor(7, 0);
		Mario(i, 35);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 51; i++)
	{
		TextColor(1, 0);
		Mario(i, 35);
		cout << "■" << endl;
	}
	for (int i = 52; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 35);
		cout << "■" << endl;
	}

//36
	for (int i = 10; i <= 18; i++)
	{
		TextColor(7, 0);
		Mario(i, 36);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 51; i++)
	{
		TextColor(1, 0);
		Mario(i, 36);
		cout << "■" << endl;
	}
	for (int i = 52; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 36);
		cout << "■" << endl;
	}
//37
	for (int i = 10; i <= 18; i++)
	{
		TextColor(7, 0);
		Mario(i, 37);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 51; i++)
	{
		TextColor(1, 0);
		Mario(i, 37);
		cout << "■" << endl;
	}
	for (int i = 52; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 37);
		cout << "■" << endl;
	}
	
//38

	for (int i = 10; i <= 18; i++)
	{
		TextColor(7, 0);
		Mario(i, 38);
		cout << "■" << endl;
	}
	for (int i = 19; i <= 51; i++)
	{
		TextColor(1, 0);
		Mario(i, 38);
		cout << "■" << endl;
	}
	for (int i = 52; i <= 59; i++)
	{
		TextColor(7, 0);
		Mario(i, 38);
		cout << "■" << endl;
	}
	//39
	for (int i = 19; i <= 30; i++)
	{
		TextColor(1, 0);
		Mario(i, 39);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 51; i++)
	{
		TextColor(1, 0);
		Mario(i, 39);
		cout << "■" << endl;
	}
	//40
	for (int i = 19; i <= 30; i++)
	{
		TextColor(1, 0);
		Mario(i, 40);
		cout << "■" << endl;
	}
	for (int i = 39; i <= 51; i++)
	{
		TextColor(1, 0);
		Mario(i, 40);
		cout << "■" << endl;

	}
	//41
		for (int i = 19; i <= 30; i++)
		{
			TextColor(1, 0);
			Mario(i, 41);
			cout << "■" << endl;
		}
		for (int i = 39; i <= 51; i++)
		{
			TextColor(1, 0);
			Mario(i, 41);
			cout << "■" << endl;
		}
	 
	 
	
	//42
		for (int i = 19; i <= 30; i++)
		{
			TextColor(1, 0);
			Mario(i, 42);
			cout << "■" << endl;
		}
		for (int i = 39; i <= 51; i++)
		{
			TextColor(1, 0);
			Mario(i, 42);
			cout << "■" << endl;
		}


		//43 15 26 43 56
		for (int i = 15; i <= 26; i++)
		{
			TextColor(2, 0);
			Mario(i, 43);
			cout << "■" << endl;
		}
		for (int i = 43; i <= 56; i++)
		{
			TextColor(2, 0);
			Mario(i, 43);
			cout << "■" << endl;
		}
//44
		for (int i = 15; i <= 26; i++)
		{
			TextColor(2, 0);
			Mario(i, 44);
			cout << "■" << endl;
		}
		for (int i = 43; i <= 56; i++)
		{
			TextColor(2, 0);
			Mario(i, 44);
			cout << "■" << endl;
		}

//45
		for (int i = 15; i <= 26; i++)
		{
			TextColor(2, 0);
			Mario(i, 45);
			cout << "■" << endl;
		}
		for (int i = 43; i <= 56; i++)
		{
			TextColor(2, 0);
			Mario(i, 45);
			cout << "■" << endl;
		}

		//46
		for (int i = 15; i <= 26; i++)
		{
			TextColor(2, 0);
			Mario(i, 46);
			cout << "■" << endl;
		}
		for (int i = 43; i <= 56; i++)
		{
			TextColor(2, 0);
			Mario(i, 46);
			cout << "■" << endl;
		}
		//47
		for (int i = 10; i <= 26; i++)
		{
			TextColor(2, 0);
			Mario(i, 47);
			cout << "■" << endl;
		}
		for (int i = 43; i <= 59; i++)
		{
			TextColor(2, 0);
			Mario(i, 47);
			cout << "■" << endl;
		}


		//48
		for (int i = 10; i <= 26; i++)
		{
			TextColor(2, 0);
			Mario(i, 48);
			cout << "■" << endl;
		}
		for (int i = 43; i <= 59; i++)
		{
			TextColor(2, 0);
			Mario(i, 48);
			cout << "■" << endl;
		}

		TextColor(0, 0);


}


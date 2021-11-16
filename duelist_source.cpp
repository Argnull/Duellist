#include <iostream>
#include <conio.h>
using namespace std;

//declare
bool gameOver; //false
enum Direction {ATACK, DEFENCE}; 
Direction dir;
// enum Deamon {HELP = 2, EXIT, ... };

class Things // enum class?
{ 
	public:
		enum Clothes {PIRATEHAT, TORTHSHIT,  	}; 
		
		
};


void Deamons() //save and dowload
{


}

void Setup()
{
	gameOver = false;


}


void Terminal()
{
//	system("cls");
	

}

void Input()
{
	if(_kbhit())//true;
	{
		switch(_getch())
		{
			case 'A':
				dir = ATACK;
				break;
			case 'D':
				dir = DEFENCE;
				break;
			case 'Z':
				gameOver = true;
				break;
			
		}
	}
}

void Logic()
{


}

//?????
int main()
{
	Setup();
	while(!gameOver)
	{
		Draw();
		Input();
		Logic();	
	}

	return 0;
}

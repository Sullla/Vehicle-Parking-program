#include <iostream>
#include <string>
#include "CarParkManager.h";

int main()
{

	parking *lol  = new parking();
	char menu;
	do {
		cout << endl;
		cout << "\t---Type S to add an id----\t ---- D to display ----\t---- R to remove----" << endl;
		cin >> menu;
		switch (menu)
		{
		case's':
			lol->add();
			break;

		case'd':
			lol->display();
			break;
		case'r':
			lol->remove();
			break;
		case 'f':
			lol->findByDate();
			break;
		}
	} while (menu!= 'p');
	system("PAUSE");
	return 0;


	


	
 
}


/*  please type your id then please type your car brand 
//then type the type of your behicle:
 if its car then type 
  1 number of doors
  2  color of car
  -----------------------------
if it is truck then type:
    1 color of it 
	2 cargo volume of it 
if it is van:
    1  type color of it 
	2  cargo volume of it
if it is moyotbike:
    1 type sixe of engine
	2 type color of it
  */
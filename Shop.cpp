#include<iostream>
using namespace std; 

void Villain();
string inventory[5] = { "Lævateinn", "EnergyBlast", "Daggers", " ", " " }; int gold = 100;
void shop(); 
void ItemDropper();
void BattleSytem();
int affinity = 0;
int health = 100;
int main() {
	for (int i = 0; i < 5; i++)
		inventory[i] = " ";

	cout << "WELCOME TO SAKAAR LOKI!!!!!" << endl; 
	int room = 1;
	char input = 'a';
	bool chests[5] = { 0,0,0,0,0 };
	while (input != 'q') { //OMG GAME LOOP!!!

		cout << "your inventory:" << endl;
		for (int i = 0; i < 5; i++)
			cout << inventory[i] << " ";
		cout << endl;

		switch (room) {
		case 1:
			Villain();
			BattleSytem();
			cout << "you're in room 1, you can go (e)ast." << endl;
			cout << "you see a (c)hest in the corner." << endl;
			if (inventory[0] != "key")
				cout << "you see a shiny (k)ey on the floot" << endl;
			cin >> input;
			if (input == 'c') {
				if (chests[0] == 0) {
					cout << "you open the chest!" << endl;
					ItemDropper();
				}
				else {
					cout << "the chest is empty!" << endl;
				}
			}
			if (input == 'e' || input == 'E')
				room = 2;
			
			if (input == 'k')
				inventory[0] = "key";
			break;
		case 2:
			Villain();
			BattleSytem();
			cout << "you're in room 2, you can go (w)est or (s)outh. there's a sho(p) in the coner" << endl;
			cin >> input;
			if (input == 'w' || input == 'E')
				room = 1;
			if (input == 'p')
				shop();
			else if (input == 's' || input == 'S')
				if (inventory[0] == "key") {
					cout << "you unlock the door with the key!" << endl;
					inventory[0] = " ";
					room = 3;

				}
				else
					cout << "the door is locked." << endl;
			break;
		case 3:
			Villain();
			BattleSytem();
			cout << "you're in room 3, you can go (n)orth or (e)ast." << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 2;
			else if (input == 'e' || input == 'E')
				room = 4;
			else
				cout << "sorry, I don't understand" << endl;
			break;
	    case 4:
			Villain();
			BattleSytem();
			cout << "you're in room 4, you can go (w)est or (s)outh." << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 3;
			else if (input == 's' || input == 'S')
				room = 5;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		case 5:
			Villain();
			BattleSytem();
			cout << "you're in room 5, you can go (n)orth or (s)outh." << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 4;
			else if (input == 's' || input == 'S')
				room = 6;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		case 6:
			Villain();
			BattleSytem();
			cout << "you're in room 6, you can go (n)orth or (e)ast." << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 5;
			else if (input == 'e' || input == 'E')
				room = 7;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		case 7:
			Villain();
			BattleSytem();
			cout << "you're in room 7, you can go (w)est or (s)outh." << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 6;
			else if (input == 's' || input == 'S')
				room = 8;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		case 8:
			Villain();
			BattleSytem();
			cout << "you're in room 8, you can go (n)orth or (e)ast." << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 7;
			else if (input == 'e' || input == 'E')
				room = 9;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		case 9:
			Villain();
			BattleSytem();
			cout << "you're in room 9, you can go (w)est or (s)outh." << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 8;
			else if (input == 's' || input == 'S')
				room = 10;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		case 10:
			Villain();
			cout << "you're in room 10, you can go (n)orth." << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 9;
			else
				cout << "sorry, I don't understand" << endl;
			break;
		}


	}

}



void shop() {
	int input = 'a';
	while (input != 0) {
		cout << "welcome to the shop!" << endl;
		cout << "items for sale:" << endl;
		cout << "1) cupcake: $5" << endl;
		cout << "2) dirty sock: $10" << endl;
		cout << "3) key: $50" << endl;
		cout << "your inventory:" << endl;
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " ";
		cout << endl<<endl;

		cout << "what would you like to purchase?" << endl;
		cin >> input;

		if (input == 1) {
			if (gold >= 5) {
				cout << "you bought the cupcake!" << endl;
				inventory[1] = "cupcake";
				gold -= 5;
			}
			else
				cout << "you don't have enough gold!" << endl;
		
		}
		else if (input == 2) {
			if (gold >= 10) {
				cout << "you bought the sock!" << endl;
				inventory[2] = "sock";
				gold -= 10;
			}
			else
				cout << "you don't have enough gold!" << endl;
		}
		else if (input == 3) {
			if (gold >= 50) {
				cout << "you bought the key!" << endl;
				inventory[0] = "key";
				gold -= 50;
			}
			else
				cout << "you don't have enough gold!" << endl;
		}
		else {
			cout << "that's not an option, dummy" << endl;
		}
	}
}


void ItemDropper() {
	int num = rand() % 100;
	if (num < 20) {
		cout << "you got a diry sock!" << endl;
		inventory[2] = "sock";
	}
	else if (num < 50) {
		cout << "you got a cupcake!" << endl;
		inventory[3] = "cupcake";
	}
	else if (num < 75) {
		cout << "you got a smol frog" << endl;
		inventory[4] = "frog";
	}
	else {
		cout << "you get nothing!" << endl;

	}
}

void Villain() {
	int num = rand() % 100;
	if (num < 5)
		cout << "Venom appeard" << endl;
	else if (num < 55)
		cout << "Surtur appeared" << endl;
	else if (num < 75)
		cout << "Agatha Harkness appeared" << endl;
	else if (num < 100)\
		cout << "Hela appeared" << endl;
	else
		cout << "Not a option" << endl;
}
void BattleSytem() {
	cout << "Batlle commencing!" << endl;
	int MonsterHealth = 50;
	char input;

	while (health >= 0 && MonsterHealth > 0) {
		if (inventory[1] == "shield") {
			cout << "the mosnter bites you for 5 hp" << endl;
			health -= 5;
		}
		else {
			cout << "the monster bites you for 10 hp" << endl;
			health -= 10;
		}
		//player attacks!
		if (inventory[0] == "sword") {
			cout << "you hit the Monster with your sword monster for 30 hp" << endl;
			MonsterHealth -= 30;
		}
		else {
			cout << "you punch the monster for 3 damage" << endl;
			MonsterHealth -= 3;
		}

		cout << "your health : " << health << ". Monster health:" << MonsterHealth << endl;
		system("pause");

		if (health > 0 && MonsterHealth > 0) {
			cout << "you can (f)ight,  (r)un, or use (p)otion" << endl;
			cin >> input;
			if (input == 'r') {
				int num = rand() % 100;
				if (num < 40) {
					cout << "you escape the battle!" << endl;
					break;
				}
				else
					cout << "chance to run failed :(" << endl;
			}
			if (input == 'p') {
				if (inventory[2] == "potion") {
					cout << "glug glug" << endl;
					health += 35;
					inventory[2] = " ";
				}
				else
					cout << "sorry, you don't have any more potion." << endl;
			}
			if (input == 'f') cout << "the batt;e continues..." << endl;


		}
	}//end of battle loop


}// end of function 

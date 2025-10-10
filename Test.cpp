#include <queue>
#include <iostream>
#include <string>

class Character {
// The class use to store the stats for all characters & Enemies
public:

	int Base_health;
//Health, Can be multiplied
	int Base_Speed;
//Speed, used to show priority in the queue, the higher the speed the faster to get into the queue
	int Base_defense;
//Defense to reduce damage
	int Base_damage;
//Damage, scalable

void Attack(Damage) {

}
void Damage_mit(Defense, Incoming_Damage) {

}
void 

};

class Enemy: public Character {
public:
	
};

class player: public Character {
public:

};

int main() {
	void Main()
    {
		string Player_choice
		cout << "Please enter your player choice";
		cin >> Player_choice;
		if (Player_choice == "Attack") {
			Player_Attack();
		}else if (Player_choice == "Defend"){
			Player_Defense();
		}else if (Player_choice == "Spell"){
			Player_Spell();
		}else{
			Menu();
		}
	}

	void Menu()
    {
		cout << "Please enter your menu choice";
		cin >> Menu_choice;
		if (Menu_choice == "Play"){
			Main()
		}else if (Menu_choice == "Leaderboard"){
			Leaderboard()
		}else{QUIT()
		}
	}
	
	Menu()
}
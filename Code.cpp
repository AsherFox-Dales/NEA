#include <SFML/Graphics.hpp>
#include <queue>

class Character {
public:

	int Base_health;
	int Base_Speed;
	int Base_defense;
	int Base_damage;

};

class Enemy: public Character {
public:

	int 
};

class player: public Character {
public:

};

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Black);
		window.display();
	}
	return 0;
}
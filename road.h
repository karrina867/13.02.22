#pragma once
#include "SFML/Graphics.hpp"
#include"const.h"
class Road {
private:
	sf::Texture texture;
	//sf::Image image; � ������� ��������
	sf::Sprite sprite;
public:
	Road(float x, float y) {
		texture.loadFromFile("road.png");
		sprite.setTexture(texture);
		sprite.setScale(1.0f,1.0f);
		sprite.setPosition(x, y);
	}
	sf::Sprite getSprite() { return sprite; }
	void update() {
		sprite.move(0.f, 3.f);
		if (sprite.getPosition().y >= WINDOW_HEIGHT) {
			sprite.setPosition(0.f, -WINDOW_HEIGHT);
		}
	}
};
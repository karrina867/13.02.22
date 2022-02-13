#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"


class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen(std::string file_name,float scale_x=1.f, float scale_y=1.f) {
		texture.loadFromFile(SPLASH_FILE_NAME);
		sprite.setTexture(texture);
		sprite.setColor(sf::Color(255, 228, 181));
		sprite.setScale(scale_x, scale_y);
	}
	sf::Sprite getSprite() { return sprite; }
};
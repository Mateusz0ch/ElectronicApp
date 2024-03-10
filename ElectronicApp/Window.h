#pragma once
#define WIDTH 600
#define HEIGHT 400
#include <SFML/graphics.hpp>

class Window
{
	sf::RenderWindow* window = NULL;
	const char* title = "Electronic Circuit creator";
public:
	Window();
	void run();
	void display();
	void draw();
};


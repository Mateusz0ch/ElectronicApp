#include "Window.h"

Window::Window() {
	window = new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), title);
}
void Window::run() {
	sf::Event event;
	while (window->isOpen()) {
		sf::Event event;
		while (window->pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window->close();
			}
			window->clear(sf::Color::White);
			draw();
			display();
		}
	}
}

void Window::display()
{
	window->display();
}

void Window::draw()
{

}

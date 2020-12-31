#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Camera {
public:
	Camera(sf::RenderWindow* wdw);

	void UpdateCam(const sf::Vector2f& player_pos);
	sf::View getCamView() {return camera;}

private:
	void initCamera();

	sf::RenderWindow* window;
	sf::View camera;
};
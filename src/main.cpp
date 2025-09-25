#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

using std::string;

int main() {
    auto window = sf::RenderWindow(sf::VideoMode({1920, 1080}), "CMake SFML Project");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        window.clear(Color(250, 220, 100, 0));

        CircleShape circle(50.f);
		circle.setFillColor(Color(230, 0, 230)); // закрашиваем наш круг 
		// circle.setOutlineThickness(S15.f); // устанавливаем толщину контура круга
		circle.setOutlineColor(Color(80,220,50)); // устанавливаем цвет контура
		circle.move({15, 15}); // перемещаем наш круг для корректного отображения в окне
		window.draw(circle);
        
        window.display();
    }
}

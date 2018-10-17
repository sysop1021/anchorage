#include "window.hpp"

Window::Window()
{
     window.create(sf::VideoMode(600, 800), "Project Anchorage", sf::Style::Default);
}

Window::~Window()
{
    // window.close();
}

void Window::PreDraw()
{
    window.clear();
}

void Window::Draw(sf::Drawable& drawable)
{
    window.draw(drawable);
}

void Window::EndDraw()
{
    window.display();
}

void Window::Update()
{
    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }
}

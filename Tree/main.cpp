#include <iostream>
#include <random>
#include <SFML/Graphics.hpp>

using namespace sf;

struct node
{
    int val;
    int pr; // random coefficient
    node(int n_val, int n_pr) {
        val = n_val;
        pr = n_pr;
    }
};

 int random() {
    std::random_device random_device; // sourse entropy
    std::mt19937 generator(random_device()); 
    // (Here one initializing value is taken, you can take more)
    std::uniform_int_distribution<> distribution(1, 1e6); // uniform distribution
    int x = distribution(generator);
    return x;
}

int main()
{

    RenderWindow window(VideoMode(400, 400), L"", Style::Default);
    window.setVerticalSyncEnabled(true);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color::Black);
        window.display();
    }
    return 0;
}
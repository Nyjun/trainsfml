#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "game.hh"

Res* Res::res;

int main()
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "kvg");
  Res::res = new Res(&window); // CAREFUL this is also a pointer
  Game game; // main container instance, could be a singleton
  while (window.isOpen())
  {
    game.handle_events();
    // TODO: game.update()
    game.draw();
  }
  Res::res->~Res();
  delete Res::res;
  return 0;
}

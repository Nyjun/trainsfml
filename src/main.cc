#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "res.hh"
#include "map.hh"
#include "game.hh"


int main()
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "kvg");
  Res* res = new Res(&window); // CAREFUL this is also a pointer
  Game game(res); // main container instance, could be a singleton
  while (window.isOpen())
  {
    game.handle_events();
    // TODO: game.update()
    game.draw();
  }
  res->~Res();
  delete res;
  return 0;
}

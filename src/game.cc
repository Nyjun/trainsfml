#include "game.hh"

#define KEY(K) (sf::Keyboard::isKeyPressed(sf::Keyboard::K))

Game::Game(Res* res) :
  map(res),
  state(State::WELCOME)
{
  res_ = res;
  window = res->window;
  //ennemies.push_back(/* create ennemy here * /);
  //FIXME entity(spawn_x, spawn_y, Direction::down, res->type_get();
}

void Game::handle_events()
{
  static sf::Event event;
  while (window->pollEvent(event))
  {
    if (event.type == sf::Event::Closed)
      window->close();
  }
}

void Game::update()
{
  /*if (State::PLAY == state)
  {
    if (KEY(Right))
      ;
    if (KEY(Left))
      ;
    if (KEY(Down))
      ;
    if (KEY(Up))
      ;
  }*/
  if (State::WELCOME == state)
  {

  }
  if (State::HELP == state)
  {

  }

}

void Game::draw()
{
  window->clear(sf::Color::Black);

  map.draw(window);
  for (unsigned i = 0; i < ennemies.size(); i++)
    ennemies[i].draw(window);
  window->display();
}

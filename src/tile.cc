#include "tile.hh"

Tile::Tile(char c)
{
  setSprite(c);
}

sf::Sprite Tile::getSprite()
{
  return this->sp_;
}

void Tile::setSprite(char c)
{
  sf::Sprite a;
  switch (c)
  {
  case 'w':
    sp_ = sf::Sprite(Res::res->sp_wall);
    break;
  default:
    sp_ = sf::Sprite(Res::res->sp_floor);
    break;
  }
}

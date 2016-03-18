#include "tile.hh"

Tile::Tile(char c, Res* res)
{
  res_ = res;
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
    sp_ = sf::Sprite(res_->sp_wall);
    break;
  default:
    sp_ = sf::Sprite(res_->sp_floor);
    break;
  }
}

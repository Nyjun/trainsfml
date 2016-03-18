#ifndef TILE_HH
# define TILE_HH

# include <SFML/Graphics.hpp>
# include "res.hh"

class Tile
{
public:
  Tile(char c, Res* res);
  sf::Sprite getSprite();
  void setSprite(char c);
private:
  Res* res_;
  sf::Sprite sp_;
};

#endif /* !TILE_HH */

#ifndef TILE_HH
# define TILE_HH

# include "res.hh"

class Tile
{
public:
  Tile(char c);
  sf::Sprite getSprite();
  void setSprite(char c);
private:
  sf::Sprite sp_;
};

#endif /* !TILE_HH */

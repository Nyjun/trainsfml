#ifndef ENTITY_HH
# define ENTITY_HH

# include "res.hh"

class Entity
{
public:
  Entity(int x, int y);
  void setPosition(int x, int y);
  void Draw(sf::RenderWindow* w);

  int getPosx();
  int getPosy();
  sf::Sprite getSprite();
private:
  int posx;
  int posy;
  sf::Sprite sp_;
};

#endif /* !ENTITY_HH */

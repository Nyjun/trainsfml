#ifndef ENTITY_HH
# define ENTITY_HH

# include "res.hh"

class Position
{
public:
  Position(int x, int y);
  ~Position() = default;
  int x;
  int y;
};

enum class Direction
{
  Up,
  Left,
  Down,
  Right
};

class Entity
{
public:
  Entity(int pos_x, int pos_y, Direction direction, sf::Sprite& sprite);
  Position position_get();
  Direction direction_get();
  void position_set(Position position);
  void direction_set(Direction direction);
  void draw(sf::RenderWindow* window);

private:
  Direction direction_;
  Position position_;
  sf::Sprite& sprite_;
};

#endif /* !ENTITY_HH */

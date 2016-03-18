#include "entity.hh"

Position::Position(int x, int y)
{
  this->x = x;
  this->y = y;
}

Entity::Entity(int pos_x, int pos_y, Direction direction, sf::Sprite& sprite) :
  direction_(direction),
  position_(pos_x, pos_y),
  sprite_(sprite)
{ }

Position Entity::position_get()
{
  return position_;
}

void Entity::position_set(Position position)
{
  position_.x = position.x;
  position.y = position.y;
}

Direction Entity::direction_get()
{
  return direction_;
}

void Entity::direction_set(Direction direction)
{
  direction_ = direction;
}

void Entity::draw(sf::RenderWindow* window)
{
  sprite_.setPosition(position_.x, position_.y);
  window->draw(sprite_);
}

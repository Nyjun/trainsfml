#include "entity.hh"

Entity::Entity(int x, int y)
{
  setPosition(x, y);
  sp_ = sf::Sprite(Res::res->sp_char);
}

void Entity::setPosition(int x, int y)
{
  posx = x;
  posy = y;
}

void Entity::Draw(sf::RenderWindow* w)
{
  auto wd = sp_.getTextureRect().width;
  auto hg = sp_.getTextureRect().height;
  sp_.setPosition(posx * Res::res->vox_x, posy * Res::res->vox_y);
  sp_.setScale(Res::res->vox_x/wd,
               Res::res->vox_y/hg);
  w->draw(sp_);
}

int Entity::getPosx()
{
  return posx;
}

int Entity::getPosy()
{
  return posy;
}

sf::Sprite Entity::getSprite()
{
  return this->sp_;
}

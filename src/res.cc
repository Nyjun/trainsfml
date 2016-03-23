#include "res.hh"

Res::Res(sf::RenderWindow* w) :
  window(w),
  vox_x(0),
  vox_y(0)
{ }

void Res::load_sprites()
{
  const sf::Rect<int> rec(0, 0, vox_x, vox_y);
  if (!txt_floor.loadFromFile("img/floor.png", rec)
    || !txt_wall.loadFromFile("img/wall.png", rec)
    || !txt_char.loadFromFile("img/char.png", rec)
    //|| !txt_mouse.loadFromFile("img/person.png", rec)
    )
    exit(2);
  sp_floor.setTexture(txt_floor);
  sp_wall.setTexture(txt_wall);
  sp_char.setTexture(txt_char);
  //sp_mouse.setTexture(txt_wall);
}

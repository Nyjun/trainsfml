#ifndef RES_HH
# define RES_HH

# include <SFML/Window.hpp>
# include <SFML/Graphics.hpp>
# include <SFML/System.hpp>
# include <iostream>

class Res
{
public:
  Res(sf::RenderWindow* w);

  sf::RenderWindow* window;
  int vox_x;
  int vox_y;
  void load_sprites();
  sf::Texture txt_floor;
  sf::Texture txt_wall;
  //sf::Texture txt_mouse;
  sf::Sprite sp_floor;
  sf::Sprite sp_wall;
  //sf::Sprite sp_mouse;
};

#endif /* !RES_HH */

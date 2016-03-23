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
  float vox_x;
  float vox_y;
  void load_sprites();
  
  sf::Texture txt_floor;
  sf::Texture txt_wall;
  sf::Texture txt_char;

  sf::Sprite sp_floor;
  sf::Sprite sp_wall;
  sf::Sprite sp_char;

  static Res* res;
};

#endif /* !RES_HH */

#ifndef MAP_HH
# define MAP_HH

# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include "tile.hh"
# include "res.hh"

class Map
{
public:
  Map(Res* res);
  void load(const std::string& file_path);
  Tile getTile(int x, int y);
  void setTile(int x, int y, Tile tile);
  void draw(sf::RenderWindow* window);
private:
  int height_;
  int width_;
  Res* res_;
  std::vector<Tile> tiles_;
};

#endif /* !MAP_HH */

#include "map.hh"

Map::Map(Res* res)
{
  res_ = res;
  this->load("default");
}

Tile Map::getTile(int x, int y)
{
  return this->tiles_.at(y * (this->width_) + x);
}

void Map::setTile(int x, int y, Tile tile)
{
  this->tiles_.at(y * (this->width_) + x) = tile;
}

void Map::load(const std::string& infile)
{
  std::vector<Tile>::iterator it;
  std::string s;
  std::ifstream file;
  file.open(std::string("maps/") + infile);
  file >> s;
  this->height_ = std::stoi(s);
  file >> s;
  this->width_ = std::stoi(s);
  res_->load_sprites();

  res_->vox_x = res_->window->getSize().x / this->width_;
  res_->vox_y = res_->window->getSize().y / this->height_;
  this->tiles_ = std::vector<Tile>();
  std::vector<Tile> v;
  v.insert(it, this->height_ * this->width_, Tile('w', res_));
  this->tiles_.swap(v);
  v.clear();

  for (int y = 0; y < this->height_ && (file >> s); y++)
    for (int x = 0; x < this->width_; x++)
      setTile(x, y, Tile(s[x], res_));
}

void Map::draw(sf::RenderWindow* w)
{
  sf::Sprite sprite;
  for (int y = 0; y < this->height_; y++)
  {
    for (int x = 0; x < this->width_; x++)
    {
      sprite = getTile(x, y).getSprite();
      sprite.setPosition(x * sprite.getTextureRect().width,
                         y * sprite.getTextureRect().height);
      w->draw(sprite);
    }
  }
}

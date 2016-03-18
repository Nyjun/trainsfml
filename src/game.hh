#ifndef GAME_HH
# define GAME_HH

# include "res.hh"
# include "entity.hh"
# include "map.hh"

enum class State
{
  WELCOME,
  PLAY,
  HELP
};

class Game
{
public:
  Game(Res* res);
  ~Game() = default;
  void update();
  void draw();
  void handle_events();
private:
  Res* res_;
  Map map;
  sf::RenderWindow* window;
  std::vector<Entity> ennemies;
  State state;
};

#endif /* !GAME_HH */
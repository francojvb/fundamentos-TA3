#include "Zombie.h"



void Zombie::init(glm::vec2 position)
{
	_position = position;
	_color.set(0, 255, 0, 255);
}

void Zombie::update(const std::vector<std::string>& levelData)
{
}

Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

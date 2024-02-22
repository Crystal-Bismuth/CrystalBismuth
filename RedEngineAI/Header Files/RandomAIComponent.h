#pragma once
#include "AIComponent.h"

class RandomAIComponent : public AIComponent
{

public:
	RandomAIComponent();
	~RandomAIComponent();

	void update();

};
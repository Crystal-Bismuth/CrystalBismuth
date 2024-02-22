#pragma once
#include "AIComponent.h"

class RandomAIComponent : public AIComponent
{

public:
	RandomAIComponent();
	RandomAIComponent(float weight);
	~RandomAIComponent();

	void update();

};
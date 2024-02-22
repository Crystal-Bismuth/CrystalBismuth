#pragma once
#include "AIComponent.h"

class SeparationAIComponent : public AIComponent
{

public:
	SeparationAIComponent(float separationRadius, float weight = 1.0f);
	~SeparationAIComponent();

	void update(Vector2D originLoc, Vector2D* otherLoc, int numOthers);

private:
	SeparationAIComponent() = delete;

	float mSeparationRadius;

};
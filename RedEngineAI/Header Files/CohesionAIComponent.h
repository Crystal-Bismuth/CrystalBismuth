#pragma once
#include "AIComponent.h"

class CohesionAIComponent : public AIComponent
{

public:
	CohesionAIComponent(float cohesionRadius, float weight = 1.0f);
	~CohesionAIComponent();

	void update(Vector2D originLoc, Vector2D* otherLoc, int numOthers);

private:
	CohesionAIComponent() = delete;

	float mCohesionRadius;

};
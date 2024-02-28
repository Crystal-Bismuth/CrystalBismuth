#pragma once
#include "AIComponent.h"

class MeanAIComponent : public AIComponent
{

public:
	MeanAIComponent(float exclusionRadius = 0.0f, float weight = 1.0f);
	~MeanAIComponent();

	void update(Vector2D* vectors, int numVectors, Vector2D offset = Vector2D::Zero());

private:

	float mExclusionRadius;

};
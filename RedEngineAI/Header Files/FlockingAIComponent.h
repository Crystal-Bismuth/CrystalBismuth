#pragma once
#include "AIComponent.h"
#include "MeanAIComponent.h"

class FlockingAIComponent : public AIComponent
{

public:
	FlockingAIComponent(float alignmentWeight, float cohesionWeight, float separationWeight, float exclusionRadius = 0.0f, float weight = 1.0f);
	~FlockingAIComponent();

	void update(Vector2D* locationVectors, Vector2D* velocityVectors, int numVectors, Vector2D offset = Vector2D::Zero());

private:
	MeanAIComponent mAlignmentComponent;
	MeanAIComponent mCohesionComponent;
	MeanAIComponent mSeparationComponent;
};
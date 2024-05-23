#include "FlockingAIComponent.h"

FlockingAIComponent::FlockingAIComponent(float alignmentWeight, float cohesionWeight, float separationWeight, float exclusionRadius = 0.0f, float weight = 1.0f)
	: AIComponent(weight),
	mAlignmentComponent(exclusionRadius, alignmentWeight),
	mCohesionComponent(exclusionRadius, cohesionWeight),
	mSeparationComponent(exclusionRadius, separationWeight)
{

}

FlockingAIComponent::~FlockingAIComponent()
{

}
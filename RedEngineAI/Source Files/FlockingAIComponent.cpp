#include "FlockingAIComponent.h"

FlockingAIComponent::FlockingAIComponent(float alignmentWeight, float cohesionWeight, float separationWeight, float exclusionRadius, float weight)
	: AIComponent(weight),
	mAlignmentComponent(exclusionRadius, alignmentWeight),
	mCohesionComponent(exclusionRadius, cohesionWeight),
	mSeparationComponent(exclusionRadius, -separationWeight) //Negative so that separation points away from the average
{

}

FlockingAIComponent::~FlockingAIComponent()
{

}

void FlockingAIComponent::update(Vector2D* locationVectors, Vector2D* velocityVectors, int numVectors, Vector2D offset)
{
	mAlignmentComponent.update(velocityVectors, numVectors);
	mCohesionComponent.update(locationVectors, numVectors, offset);
	mSeparationComponent.update(locationVectors, numVectors, offset);

	mValue = mAlignmentComponent.getValue() + mCohesionComponent.getValue() + mSeparationComponent.getValue();
}
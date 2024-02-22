#include "RandomAIComponent.h"
#include "Math.h"

RandomAIComponent::RandomAIComponent()
	: AIComponent()
{
	update();
}

RandomAIComponent::~RandomAIComponent()
{

}

void RandomAIComponent::update()
{
	//Generate random normalized vector from a random angle

	float randomAngle = ((float)rand() / (float)RAND_MAX) * 2 * PI;
	mValue = Vector2D(cos(randomAngle), sin(randomAngle));
}
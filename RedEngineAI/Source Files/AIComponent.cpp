#include "AIComponent.h"

AIComponent::AIComponent()
	: mValue(Vector2D::Zero())
	, mWeight(1.0f)
{
	
}

AIComponent::AIComponent(float weight)
	: mValue(Vector2D::Zero())
	, mWeight(weight)
{

}

AIComponent::~AIComponent()
{

}
#include "CohesionAIComponent.h"

CohesionAIComponent::CohesionAIComponent(float cohesionRadius, float weight)
	: AIComponent(weight)
	, mCohesionRadius(cohesionRadius)
{
	
}

CohesionAIComponent::~CohesionAIComponent()
{

}

void CohesionAIComponent::update(Vector2D originLoc, Vector2D* otherLoc, int numOthers)
{
	Vector2D* otherOffsets = new Vector2D[numOthers];

	for (int i = 0; i < numOthers; i++)
		otherOffsets[i] = otherLoc[i] - originLoc;

	Vector2D sumOffsets = Vector2D::Zero();
	int numberSummed = 0;

	for (int i = 0; i < numOthers; i++)
		if (otherOffsets[i].length() < mCohesionRadius)
		{
			sumOffsets += otherOffsets[i];
			numberSummed++;
		}

	if (numberSummed == 0)
	{
		mValue = Vector2D::Zero();
	}
	else
	{
		mValue = (sumOffsets / numberSummed).normalized();
	}
			
}
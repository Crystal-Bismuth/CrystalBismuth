#include "MeanAIComponent.h"

MeanAIComponent::MeanAIComponent(float exclusionRadius, float weight)
	: AIComponent(weight)
	, mExclusionRadius(exclusionRadius)
{

}

MeanAIComponent::~MeanAIComponent()
{

}

void MeanAIComponent::update(Vector2D* vectors, int numVectors, Vector2D offset)
{
	Vector2D* otherOffsets = new Vector2D[numVectors];

	for (int i = 0; i < numVectors; i++)
		otherOffsets[i] = vectors[i] - offset;

	Vector2D sumOffsets = Vector2D::Zero();
	int numberSummed = 0;

	for (int i = 0; i < numVectors; i++)
		if (!mExclusionRadius || otherOffsets[i].length() < mExclusionRadius)
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
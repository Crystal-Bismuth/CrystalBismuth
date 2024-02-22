#include "AlignmentAIComponent.h"

AlignmentAIComponent::AlignmentAIComponent(float alignmentRadius, float weight)
	: AIComponent(weight)
	, mAlignmentRadius(alignmentRadius)
{

}

AlignmentAIComponent::~AlignmentAIComponent()
{

}

void AlignmentAIComponent::update(Vector2D originLoc, Vector2D* otherHeadings, int numOthers)
{
	Vector2D* otherOffsets = new Vector2D[numOthers];

	for (int i = 0; i < numOthers; i++)
		otherOffsets[i] = otherHeadings[i] - originLoc;

	Vector2D sumOffsets = Vector2D::Zero();
	int numberSummed = 0;

	for (int i = 0; i < numOthers; i++)
		if (otherOffsets[i].length() < mAlignmentRadius)
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
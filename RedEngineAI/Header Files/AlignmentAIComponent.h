#pragma once
#include "AIComponent.h"

class AlignmentAIComponent : public AIComponent
{

public:
	AlignmentAIComponent(float alignmentRadius, float weight = 1.0f);
	~AlignmentAIComponent();

	void update(Vector2D originLoc, Vector2D* otherPositions, Vector2D* otherHeadings, int numOthers);

private:
	float mAlignmentRadius;

};
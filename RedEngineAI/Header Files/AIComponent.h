#pragma once
#include <Vector2D.h>
#include <Trackable.h>

class AIComponent : public Trackable
{
public:
	Vector2D getValue() { return mValue * mWeight; }

protected:
	AIComponent();
	AIComponent(float weight);
	~AIComponent();

	Vector2D mValue;

private:
	float mWeight;

};
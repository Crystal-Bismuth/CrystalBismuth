#pragma once
#include <Vector2D.h>
#include <Trackable.h>

class AIComponent : Trackable
{
public:
	Vector2D getValue() { return mValue; }

protected:
	AIComponent();
	~AIComponent();

private:
	Vector2D mValue;

};
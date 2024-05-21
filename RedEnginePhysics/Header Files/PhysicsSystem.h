#pragma once
#include "Trackable.h"
#include <vector>
#include <Vector2D.h>

class PhysicsData2D;

class PhysicsSystem : public Trackable
{

public:
	static PhysicsSystem* getInstance();
	static void cleanupInstance();

	void update(float deltaTime);

	PhysicsData2D* createObject();
	PhysicsData2D* createObject(Vector2D, Vector2D, Vector2D, float, float, float, float, float);

	void destroyObject(PhysicsData2D* obj);
	

private:
	PhysicsSystem();
	~PhysicsSystem();

	std::vector<PhysicsData2D*> mObjects;

	static PhysicsSystem* mspInstance;

};
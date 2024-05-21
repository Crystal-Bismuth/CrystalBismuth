#include "PhysicsSystem.h"
#include "PhysicsData2D.h"
#include <cassert>

using namespace std;

PhysicsSystem::PhysicsSystem()
{

}

PhysicsSystem::~PhysicsSystem()
{
	for (vector<PhysicsData2D*>::iterator it = mObjects.begin(); it != mObjects.end(); it++)
	{
		delete *it;
	}

	mObjects.clear();
}

PhysicsSystem* PhysicsSystem::getInstance()
{
	if (!mspInstance)
		mspInstance = new PhysicsSystem();

	return mspInstance;
}

void PhysicsSystem::cleanupInstance()
{
	if (mspInstance)
		delete mspInstance;

	mspInstance = nullptr;
}

void PhysicsSystem::update(float deltaTime)
{
	for (vector<PhysicsData2D*>::iterator it = mObjects.begin(); it != mObjects.end(); it++)
	{
		(*it)->integrate(deltaTime);
	}
}

PhysicsData2D* PhysicsSystem::createObject()
{
	PhysicsData2D* obj = new PhysicsData2D();

	mObjects.push_back(obj);

	return obj;
}

PhysicsData2D* PhysicsSystem::createObject(Vector2D pos, Vector2D vel, Vector2D acc,
	float mass, float facing, float rotVel, float rotAcc, float dampingConstant)
{
	PhysicsData2D* obj = new PhysicsData2D(pos, vel, acc, mass, facing, rotVel, rotAcc, dampingConstant);

	mObjects.push_back(obj);

	return obj;
}

void PhysicsSystem::destroyObject(PhysicsData2D* obj)
{
	for (vector<PhysicsData2D*>::iterator it = mObjects.begin(); it != mObjects.end(); it++)
	{
		if (obj == *it)
		{
			mObjects.erase(it);
			delete obj;

			return;
		}
	}

	assert(false); //Should NEVER get HERE. Trying to delete invalid object!!!
}
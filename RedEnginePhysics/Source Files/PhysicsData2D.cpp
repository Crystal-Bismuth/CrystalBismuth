#include "PhysicsData2D.h"

PhysicsData2D::PhysicsData2D()
{
    mPos = Vector2D::Zero();
    mVel = Vector2D::Zero();
    mAcc = Vector2D::Zero();

    mInverseMass = 1.0f;
    mFacing = 0.0f;
    mRotVel = 0.0f;
    mRotAcc = 0.0f;
    mDampingConstant = 1.0f;
}

PhysicsData2D::PhysicsData2D(Vector2D pos, Vector2D vel, Vector2D acc, 
    float mass, float facing, float rotVel, float rotAcc, float dampingConstant)
{
    mPos = pos;
    mVel = vel;
    mAcc = acc;

    mInverseMass = 1.0f / mass;
    mFacing = facing;
    mRotVel = rotVel;
    mRotAcc = rotAcc;
    mDampingConstant = dampingConstant;
}

void PhysicsData2D::integrate(float deltaTime)
{

    //Update position with velocity
    mPos += mVel * deltaTime;

    //Acceleration here stays constant... This would be like gravity. No gravity means mAcc should stay Vector2D::Zero()
    Vector2D accumulatedAcc = mAcc;
    accumulatedAcc += mForceAccumulator * mInverseMass;

    //Update velocity with acceleration
    mVel += accumulatedAcc * deltaTime;

    //Impose drag!
    mVel *= mDampingConstant;
}
#pragma once

#include "Trackable.h"
#include "Vector2D.h"

class PhysicsData2D : public Trackable
{

public:
    friend class PhysicsSystem;

    Vector2D getPos() { return mPos; }
    Vector2D getVel() { return mVel; }
    Vector2D getAcc() { return mAcc; }
    float getMass() { return 1.0f / mInverseMass; }
    float getFacing() { return mFacing; }
    float getRotVel() { return mRotVel; }
    float getRotAcc() { return mRotAcc; }
    float getDampingConstnat() { return mDampingConstant; }

    float addForce(Vector2D force) { mForceAccumulator += force; }

    void setPos(Vector2D pos) { mPos = pos; }
    void setVel(Vector2D vel) { mVel = vel; }
    void setAcc(Vector2D acc) { mAcc = acc; }
    void setMass(float mass) { mInverseMass =  1.0f / mass; }
    void setFacing(float angle) { mFacing = angle; }
    void setRotVel(float rotVel) { mRotVel = rotVel; }
    void setRotAcc(float rotAcc) { mRotAcc = rotAcc; }
    void setDampingConstant(float dampingConstant) { mDampingConstant = dampingConstant; }

private:
    PhysicsData2D();
    PhysicsData2D(Vector2D, Vector2D, Vector2D, float, float, float, float, float);

    void integrate(float deltaTime);

    Vector2D mPos;
    Vector2D mVel;
    Vector2D mAcc;
    Vector2D mForceAccumulator;

    float mInverseMass;
    float mFacing;
    float mRotVel;
    float mRotAcc;
    float mDampingConstant;

};
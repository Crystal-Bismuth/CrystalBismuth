#include "GameObject2D.h"
#include "Animation.h"
#include "Sprite.h"
#include "GraphicsSystem.h"
#include "PhysicsSystem.h"
#include "PhysicsData2D.h"

GameObject2D::GameObject2D()
{
	mIsUsingPhysics = false;
	mObjectData.l = new Vector2D();
	mDrawingMode = DrawMode::None;
	mImage.s = nullptr;
}

GameObject2D::~GameObject2D()
{
	if (mIsUsingPhysics)
		delete mObjectData.p;
	else
		delete mObjectData.l;
}

GameObject2D::GameObject2D(Sprite* sprite, Vector2D location, GameObject2D* parent, bool isUsingPhysics)
{
	mIsUsingPhysics = isUsingPhysics;
	if (mIsUsingPhysics)
	{
		mObjectData.p = PhysicsSystem::getInstance()->createObject();
		mObjectData.p->setPos(location);
	}
	else
	{
		mObjectData.l = new Vector2D();
		*(mObjectData.l) = location;
	}

	mDrawingMode = DrawMode::SpriteMode;
	mImage.s = sprite;
	mParent = parent;
}

GameObject2D::GameObject2D(Animation* animation, Vector2D location, GameObject2D* parent, bool isUsingPhysics)
{
	mIsUsingPhysics = isUsingPhysics;
	if (mIsUsingPhysics)
	{
		mObjectData.p = PhysicsSystem::getInstance()->createObject();
		mObjectData.p->setPos(location);
	}
	else
	{
		mObjectData.l = new Vector2D();
		*(mObjectData.l) = location;
	}

	mDrawingMode = DrawMode::AnimationMode;
	mImage.a = animation;
	mParent = parent;
}

Vector2D GameObject2D::getSize()
{
	switch (mDrawingMode)
	{
	case DrawMode::SpriteMode:
		return mImage.s->getSize();
		break;
	case DrawMode::AnimationMode:
		return mImage.a->getCurrentSprite()->getSize();
		break;
	default:
		return Vector2D::Zero();
		break;
	}
}

Vector2D GameObject2D::getGameSize()
{
	GraphicsSystem* gs = GraphicsSystem::getInstance();

	switch (mDrawingMode)
	{
	case DrawMode::SpriteMode:
		return gs->convertToGridCoordinates(mImage.s->getSize());
		break;
	case DrawMode::AnimationMode:
		return gs->convertToGridCoordinates(mImage.a->getCurrentSprite()->getSize());
		break;
	default:
		return Vector2D::Zero();
		break;
	}
}

Vector2D GameObject2D::getScale()
{
	switch (mDrawingMode)
	{
	case DrawMode::SpriteMode:
		return mImage.s->getScale();
		break;
	case DrawMode::AnimationMode:
		return mImage.a->getCurrentSprite()->getScale();
		break;
	default:
		return Vector2D::Zero();
		break;
	}
}
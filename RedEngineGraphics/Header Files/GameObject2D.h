#pragma once
#include "Trackable.h"
#include "Vector2D.h"
#include "PhysicsData2D.h"

class Sprite;
class Animation;

class GameObject2D : public Trackable
{
public:
	friend class GraphicsSystem;
	friend class GameObject2DManager;

	Vector2D getLoc() { return mParent ? getLocalLoc() + mParent->getLoc() : getLocalLoc(); }
	Vector2D getLocalLoc() { return mIsUsingPhysics ? mObjectData.p->getPos() : *(mObjectData.l); }
	Vector2D getSize();
	Vector2D getGameSize();
	Vector2D getScale();

	void setLoc(Vector2D location) { if (mIsUsingPhysics) mObjectData.p->setPos(location); else *(mObjectData.l) = location; }

	virtual void update(float deltaTime) {}

protected:
	GameObject2D();
	virtual ~GameObject2D();

	GameObject2D(Sprite*, Vector2D loc = Vector2D::Zero(), GameObject2D* parent = nullptr, bool isUsingPhysics = false);
	GameObject2D(Animation*, Vector2D loc = Vector2D::Zero(), GameObject2D* parent = nullptr, bool isUsingPhysics = false);

	enum DrawMode
	{
		None,
		SpriteMode,
		AnimationMode
	};

	union Image
	{
		Sprite* s; 
		Animation* a;
	};

	union ObjectData
	{
		Vector2D* l;
		PhysicsData2D* p;
	};

	DrawMode mDrawingMode;
	Image mImage;

	bool mIsUsingPhysics;
	ObjectData mObjectData;

	GameObject2D* mParent;
};
#include "UIElement.h"
#include "GraphicsSystem.h"
#include "Animation.h"
#include "Texture2D.h"

using namespace std;

UIElement::UIElement(std::string spriteFilepath, std::string objectKey, Direction animationDirection, float distanceToMove, float speed, Vector2D location, Vector2D scale, GameObject2D* parent, bool animateOnHover)
{
	GraphicsSystem* gs = GraphicsSystem::getInstance();

	
	Texture2D* tex = gs->createAndAddTexture2D(objectKey, spriteFilepath, true);

	mDrawingMode = GameObject2D::SpriteMode;
	mImage.s = gs->createAndAddSprite(objectKey, &tex, Vector2D::Zero(), tex->getSize(), scale);

	*(mObjectData.l) = location;
	mOrigLoc = location;
	mDistToMove = distanceToMove;
	mSpeed = speed;

	mIsAnimating = false;
	mAnimationDirection = animationDirection;
	mAnimateOnHover = animateOnHover;

	mParent = parent;
}

UIElement::UIElement(std::string spriteFilepath, std::string objectKey, Vector2D location, Vector2D scale, GameObject2D* parent)
{
	GraphicsSystem* gs = GraphicsSystem::getInstance();


	Texture2D* tex = gs->createAndAddTexture2D(objectKey, spriteFilepath, true);

	mDrawingMode = GameObject2D::SpriteMode;
	mImage.s = gs->createAndAddSprite(objectKey, &tex, Vector2D::Zero(), tex->getSize(), scale);

	*(mObjectData.l) = location;
	mOrigLoc = location;
	mDistToMove = 0.0f;
	mSpeed = 0.0f;

	mIsAnimating = false;
	mAnimationDirection = (Direction)-1;
	mAnimateOnHover = false;

	mParent = parent;
}

UIElement::UIElement(std::string animationTextureFilepath, std::string objectKey, int animationColumns, int animationRows, Vector2D location, bool animateOnHover)
{
	GraphicsSystem* gs = GraphicsSystem::getInstance();

	
	Texture2D* tex = gs->createAndAddTexture2D(objectKey, animationTextureFilepath, true);
	gs->createAndAddAnimationData(objectKey, &tex, animationColumns, animationRows);

	mDrawingMode = GameObject2D::AnimationMode;
	mImage.a = gs->createAndAddAnimation(objectKey, 60);
	mDistToMove = 0.0f;
	mSpeed = 0.0f;

	*(mObjectData.l) = location;
	mAnimationDirection = (Direction)-1;
	mAnimateOnHover = animateOnHover;

	mIsAnimating = false;
}

UIElement::UIElement(string objectKey, Vector2D location, Vector2D scale, GameObject2D* parent)
{
	GraphicsSystem* gs = GraphicsSystem::getInstance();

	mDrawingMode = GameObject2D::None;
	mImage.s = nullptr;

	*(mObjectData.l) = location;
	mOrigLoc = location;
	mDistToMove = 0.0f;
	mSpeed = 0.0f;

	mIsAnimating = false;
	mAnimationDirection = (Direction)-1;
	mAnimateOnHover = false;

	mParent = parent;
}

UIElement::UIElement(Sprite* sprite, Vector2D location, Vector2D scale, GameObject2D* parent)
{
	GraphicsSystem* gs = GraphicsSystem::getInstance();

	mDrawingMode = GameObject2D::SpriteMode;
	mImage.s = sprite;

	*(mObjectData.l) = location;
	mOrigLoc = location;
	mDistToMove = 0.0f;
	mSpeed = 0.0f;

	mIsAnimating = false;
	mAnimationDirection = (Direction)-1;
	mAnimateOnHover = false;

	mParent = parent;
}

UIElement::UIElement()
{
	mDrawingMode = GameObject2D::None;
	mImage.s = nullptr;

	*(mObjectData.l) = Vector2D::Zero();
	mOrigLoc = Vector2D::Zero();
	mDistToMove = 0.0f;
	mSpeed = 0.0f;

	mIsAnimating = false;
	mAnimationDirection = (Direction)-1;
	mAnimateOnHover = false;

	mParent = nullptr;
}

UIElement::~UIElement()
{

}

void UIElement::update(float deltaTime)
{
	if (mParent != nullptr)
	{
		UIElement* parent = (UIElement*)mParent;

		if (parent->getIsAnimating())
			return;
	}

	if (mDrawingMode == GameObject2D::AnimationMode)
	{
		mImage.a->setReversed(!mIsAnimating);

		mImage.a->update(deltaTime);
	}
	else
	{
		if (mAnimationDirection == Direction::Left)
		{
			if (mIsAnimating && mObjectData.l->getX() > mOrigLoc.getX() - mDistToMove)
			{
				mObjectData.l->setX(mObjectData.l->getX() - mDistToMove * deltaTime * mSpeed);
			}
			else if (!mIsAnimating && mObjectData.l->getX() < mOrigLoc.getX())
			{
				mObjectData.l->setX(mObjectData.l->getX() + mDistToMove * deltaTime * mSpeed);
			}
		}
		else if (mAnimationDirection == Direction::Right)
		{
			if (mIsAnimating && mObjectData.l->getX() < mOrigLoc.getX() + mDistToMove)
			{
				mObjectData.l->setX(mObjectData.l->getX() + mDistToMove * deltaTime * mSpeed);
			}
			else if (!mIsAnimating && mObjectData.l->getX() > mOrigLoc.getX())
			{
				mObjectData.l->setX(mObjectData.l->getX() - mDistToMove * deltaTime * mSpeed);
			}
		}
		else if (mAnimationDirection == Direction::Up)
		{
			if (mIsAnimating && mObjectData.l->getY() < mOrigLoc.getY() + mDistToMove)
			{
				mObjectData.l->setY(mObjectData.l->getY() + mDistToMove * deltaTime * mSpeed);
			}
			else if (!mIsAnimating && mObjectData.l->getY() > mOrigLoc.getY())
			{
				mObjectData.l->setY(mObjectData.l->getY() - mDistToMove * deltaTime * mSpeed);
			}
		}
		else if (mAnimationDirection == Direction::Down)
		{
			if (mIsAnimating && mObjectData.l->getY() > mOrigLoc.getY() - mDistToMove)
			{
				mObjectData.l->setY(mObjectData.l->getY() - mDistToMove * deltaTime * mSpeed);
			}
			else if (!mIsAnimating && mObjectData.l->getY() < mOrigLoc.getY())
			{
				mObjectData.l->setY(mObjectData.l->getY() + mDistToMove * deltaTime * mSpeed);
			}
		}
	}
	
}
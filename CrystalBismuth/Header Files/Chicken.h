#pragma once
#include "Trackable.h"
#include <string>
#include "GameObject2D.h"

class Sprite;
class Texture2D;
class AnimationData;

const std::string RESOURCES_DIRECTORY = "Resource Files/";
const std::string ANIMATIONS_DIRECTORY = "Animations/";
const std::string EGG_DIRECTORY = "Eggs/";
const std::string EGG_FILENAME = "Chicken Egg.png";
const std::string EGG_HATCHING_FILENAME = "Egg Hatching.png";
const std::string CHICKS_DIRECTORY = "Chicks/";
const std::string CHICK_FILENAME = "Chick.png";

class Chicken : public GameObject2D
{
public:
	Chicken(float timeToMaturity);
	~Chicken();

	void update(float deltaTime);

private:
	Texture2D* mpEggTexture;
	Sprite* mpEggSprite;

	Texture2D* mpEggHatchingTexture;
	AnimationData* mpEggHatchingAnimationData;
	Animation* mpEggHatchingAnimation;

	Texture2D* mpChickenTexture;
	Sprite* mpChickenSprite;
	
	float mTimeToMaturity = 0.0f;
	float mLifeTime = 0.0f;

	bool mHatched;
};
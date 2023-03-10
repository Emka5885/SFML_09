#pragma once
#include "AssetManager.h"

class MonsterAnimation
{
public:
	MonsterAnimation();
	void ChangeFrame(std::string& currentType, int& frame, AssetManager& assetManager, sf::RectangleShape& body, bool& change);
	void ChangeType(std::string& currentType, std::string type, int& frame, AssetManager& assetManager, sf::RectangleShape& body, bool& change, int& randomNumber);
};
#pragma once


class GameManager
{
public:
	static GameManager* mInstance ;

	GameManager();
	static GameManager* GetInstance();

	void Update();
	
};


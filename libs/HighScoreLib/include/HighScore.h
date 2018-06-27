#pragma once
#include "Score.h"
#include <algorithm>
#include <list>
#include <iostream>
using namespace std;
class HighScore
{
public:
	HighScore(int lenght);
	~HighScore();	
	Score* GetDataFromPosition(int position);
	void AddScore(string _name, int _score);
	void ShowScores();
private:
	list<Score*>* scoreList;
	int lenght;
};


#pragma once
#include <iostream>
using namespace std;

class Score
{
public:
	Score(string _name, int _score);
	~Score();
	int GetScore() const;
	string GetName() const;
	void SetScore(int newScore);
	void SetName(string newName);
private:
	string name;
	int score;
};


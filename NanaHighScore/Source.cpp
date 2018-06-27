#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>
#include "HighScore.h"
using namespace nana;

int main()
{	
	const int cantScores = 5;
	HighScore* hScore = new HighScore(cantScores);
	Score* s;
	hScore->AddScore("Pepe", 200);
	hScore->AddScore("Marta", 312);
	hScore->AddScore("Jose", 15);
	hScore->AddScore("Carlos", 500);
	hScore->AddScore("Jaime", 150);

	form fm(API::make_center(150, 150), appear::decorate<appear::minimize, appear::maximize>());
	fm.caption("HighScore Table");

	
	label _label(fm, rectangle(40, 10, 100, 150));
	_label.format(true);
	string text;
	text += "<bold>   Scores\n\n";
	for (int i = 0; i < cantScores; i++)
	{
		s = hScore->GetDataFromPosition(i);
		if (s)
		{
			text += s->GetName() + "    " + to_string(s->GetScore()) + "\n";
		}
	}
	
	_label.fgcolor(nana::color(0, 0, 0));	
	_label.caption(text);

	fm.show();
	exec();
	delete(hScore);
	delete(s);
}
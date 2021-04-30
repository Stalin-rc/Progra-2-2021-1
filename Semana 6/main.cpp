#include "Competition.h"
#include <ctime>
#include <conio.h>

int main() {
	srand(time(NULL));

	Console::SetWindowSize(100, 40);
	Console::CursorVisible = false;

	char key;

	int modelDynamic, modelLeger, modelQuatre;

	cout << "Input the dynamic model: "; cin >> modelDynamic;
	cout << "Input the leger model: "; cin >> modelLeger;
	cout << "Input the quatre model: "; cin >> modelQuatre;

	Competition* comp = new Competition(modelDynamic, modelLeger, modelQuatre);


	while (true) {
		Console::Clear();
		comp->moveEverything();
		comp->drawEverything();
		_sleep(50);

		if (_kbhit()) {
			flushall();
			key = _getch();
			if (key == 32) {
				comp->again();
			}
			if (key == 27) {
				Console::Clear();
				break;
			}
		}
	}

	comp->showRanking();

	_getch();
	return 0;
}
#include "ArrVacationPlan.h"
#include <conio.h>
#include <ctime>

int main() {
	srand(time(NULL));

	ArrVacationPlan* arr = new ArrVacationPlan();
	arr->addVacationPlan();
	arr->addVacationPlan();
	//arr->addVacationPlan();

	arr->listAllVacationPlan();
	/*_getch(); system("cls");
	arr->vacationPlanSameHotelName("Westin");
	_getch(); system("cls");
	arr->vacationPlansInAYearInterval(2003, 2010);
	_getch(); system("cls");
	arr->listAllTickets();*/
	/*arr->deleteLastVacationPlan();
	cout << "Last one deleted" << endl;
	arr->listAllVacationPlan();*/
	/*arr->insertVacationPlan(1);
	cout << "Inserted" << endl;
	arr->listAllVacationPlan();*/

	_getch();
	return 0;
}
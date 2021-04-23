#pragma once
#include "Hotel.h"
#include "Ticket.h"

class VacationPlan : public Hotel, public Ticket {
private:
	int daysOfVacation;
	int numberOfPeople;

public:
	VacationPlan() {
		daysOfVacation = rand() % 30 + 1;
		numberOfPeople = rand() % 10 + 1;
	}

	~VacationPlan(){}

	void getVacationPlanInfo() {
		cout << "--Vacation Plan--" << endl;
		cout << "Days of vacation: " << daysOfVacation << endl;
		cout << "Number of people: " << numberOfPeople << endl;
		getHotelInfo();
		getTicketInfo();
		cout << endl;
	}
};
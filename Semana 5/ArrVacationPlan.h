#pragma once
#include "VacationPlan.h"
#include <vector>

using namespace std;

class ArrVacationPlan {
private:
	vector<VacationPlan*> arr;

public:
	ArrVacationPlan(){}
	~ArrVacationPlan() {}

	void addVacationPlan() {
		VacationPlan* v = new VacationPlan();
		arr.push_back(v);
	}

	void deleteLastVacationPlan() {
		arr.pop_back();
	}

	void insertVacationPlan(int position) {
		VacationPlan* v = new VacationPlan();
		arr.insert(arr.begin() + position, v);
	}

	void deleteVacationPlan(int position) {
		arr.erase(arr.begin() + position);
	}

	void vacationPlansInAYearInterval(int beforeYear, int afterYear) {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i]->getYear() >= beforeYear && arr[i]->getYear() <= afterYear) {
				arr[i]->getVacationPlanInfo();
			}
		}
	}

	void vacationPlanSameHotelName(string name) {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i]->getName() == name) {
				arr[i]->getVacationPlanInfo();
			}
		}
	}

	void listAllTickets() {
		for (int i = 0; i < arr.size(); i++) {
			arr[i]->getTicketInfo();
		}
	}

	void listAllVacationPlan() {
		for (int i = 0; i < arr.size(); i++) {
			arr[i]->getVacationPlanInfo();
		}
	}

};
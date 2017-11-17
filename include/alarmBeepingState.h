//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: alarmBeepingState.h
*/

#ifndef AlarmBeepingStateH
#define AlarmBeepingStateH
#include "IAlarmState.h"
#include "windows.h"

using namespace std;

class AlarmBeepingState : public IAlarmState {
	public:
		AlarmBeepingState();
		virtual ~AlarmBeepingState();
		int getId();
		string getName();
		bool isBeeping();
		bool beep();
		int rcount();

	private:
		int id;
		bool beeping;
		string name;
		int count;

};

//---------------------------------------------------------------------------
#endif

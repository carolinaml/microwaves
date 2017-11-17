//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: alarmIdleState.h
*/

#ifndef AlarmIdleStateH
#define AlarmIdleStateH
#include "IAlarmState.h"

using namespace std;

class AlarmIdleState : public IAlarmState {
	public:
		AlarmIdleState();
		virtual ~AlarmIdleState();
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

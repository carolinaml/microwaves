//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerExtendedState.h
*/

#ifndef TimerExtendedStateH
#define TimerExtendedStateH

#include <iostream>
#include "ITimerState.h"
#include "stopwatch.h"

using namespace std;

class TimerExtendedState : public ITimerState {
	public:
		TimerExtendedState(unsigned seconds);
		virtual ~TimerExtendedState();
		int getId();
		string getTime();
		string getName();
		bool isExtended();
		unsigned getSeconds();
		bool substractSec();

	private:
		TimerExtendedState();
		int id;
		int s, m;
		bool extended;
		string name;
		swTime * sw;

};
//---------------------------------------------------------------------------
#endif

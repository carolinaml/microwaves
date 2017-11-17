//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerActiveState.h
*/

#ifndef TimerActiveStateH
#define TimerActiveStateH

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include "ITimerState.h"
#include "stopwatch.h"

using namespace std;

class TimerActiveState : public ITimerState {
	public:
		TimerActiveState();
		virtual ~TimerActiveState();
		int getId();
		string getTime();
		string getName();
		bool isExtended();
		unsigned getSeconds();
		bool substractSec();

	private:
		int id;
		int s, m;
		bool extended;
		string name;
		swTime * sw;

};

//---------------------------------------------------------------------------
#endif

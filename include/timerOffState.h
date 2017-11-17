//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerOffState.h
*/
#ifndef timerOffStateH
#define timerOffStateH

#include <iostream>
#include <windows.h>
#include "ITimerState.h"
#include "stopwatch.h"

using namespace std;

class TimerOffState : public ITimerState {
	public:
		TimerOffState();
		virtual ~TimerOffState();
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

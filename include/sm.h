//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: sm.h
//		State Machine
*/

#ifndef smH
#define smH

#include <iostream>
#include <sstream>
#include "IOActions.h"
#include "mwStates.h"
#include "mwIdle.h"
#include "mwOpenDoor.h"
#include "mwCooking.h"
#include "mwCookingExtended.h"
#include "mwIdleBeeping.h"
#include "lightOnState.h"
#include "lightOffState.h"
#include "timerOffState.h"
#include "timerActiveState.h"
#include "timerExtendedState.h"
#include "ovenCookingState.h"
#include "ovenOffState.h"
#include "doorClosedState.h"
#include "doorOpenState.h"
#include "buttonActiveState.h"
#include "buttonDisabledState.h"
#include "alarmIdleState.h"
#include "alarmBeepingState.h"

#include <windows.h>
#include <tchar.h>
using namespace std;

class stateMachine {
	public:
		stateMachine();
		virtual ~stateMachine();
		void updateState(IOACTION action);
		void openDoor();
		void closeDoor();
		void pushButton();
		void expiresTime();
		void finishBeeping();
		string getMwState();
		string getLightState();
		string getButtonState();
		string getDoorState();
		string getOvenState();
		string getTimerState();
		string getAlarmState();
		bool isCooking();
		bool isBeeping();
		void getNextState(MWStates nextState);
		string getTime();
		void substractSec();
		void beep();
	private:
		IState * currentState;
		ILightState * lightState;
		IButtonState * buttonState;
		IDoorState * doorState;
		IOvenState * ovenState;
		ITimerState * timerState;
		IAlarmState * alarmState;
};

//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: sm.cpp
//      State Machine
*/

#pragma hdrstop
#include "sm.h"
using namespace std;

stateMachine::stateMachine()
{
	currentState = new IdleState();
	lightState   = new LightOffState();
	buttonState  = new ButtonActiveState();
	doorState    = new DoorClosedState();
	ovenState 	 = new OvenOffState();
	timerState	 = new TimerOffState();
	alarmState	 = new AlarmIdleState();
}

stateMachine::~stateMachine()
{
}

void stateMachine::openDoor()
{
	IOACTION action = getAction("OPENDOOR");
	updateState(action);
}

void stateMachine::closeDoor()
{
	IOACTION action = getAction("CLOSEDOOR");
	updateState(action);
}

void stateMachine::pushButton()
{
	IOACTION action = getAction("PUSHBUTTON");
	updateState(action);
}

void stateMachine::expiresTime()
{
	IOACTION action = getAction("EXPIRESTIME");
	updateState(action);
}

void stateMachine::finishBeeping()
{
	IOACTION action = getAction("FINISHBEEPING");
	updateState(action);
}

void stateMachine::updateState(IOACTION action)
{
	MWStates nextState = currentState->getNextState(action);
	getNextState(nextState);
}

void stateMachine::getNextState(MWStates nextState)
{
	if (nextState == idle)
	{
		delete currentState;
		delete lightState;
		delete buttonState;
		delete doorState;
		delete ovenState;
		delete timerState;
		delete alarmState;

		currentState = new IdleState();
		lightState   = new LightOffState();
		buttonState  = new ButtonActiveState();
		doorState 	 = new DoorClosedState();
		ovenState 	 = new OvenOffState();
		timerState 	 = new TimerOffState();
		alarmState 	 = new AlarmIdleState();
    }
	else if (nextState == opendoor)
	{
		delete currentState;
		delete lightState;
		delete buttonState;
		delete doorState;
		delete ovenState;
		delete timerState;
		delete alarmState;

		currentState = new OpenDoorState();
		lightState   = new LightOnState();
		buttonState  = new ButtonDisabledState();
		doorState 	 = new DoorOpenState();
		ovenState 	 = new OvenOffState();
		timerState 	 = new TimerOffState();
		alarmState 	 = new AlarmIdleState();
	}
	else if (nextState == cooking)
	{
		delete currentState;
		delete lightState;
		delete buttonState;
		delete doorState;
		delete ovenState;
		delete timerState;
		delete alarmState;

		currentState = new CookingState();
		lightState 	 = new LightOnState();
		buttonState  = new ButtonActiveState();
		doorState 	 = new DoorClosedState();
		ovenState 	 = new OvenCookingState();
		timerState 	 = new TimerActiveState();
		alarmState 	 = new AlarmIdleState();
	}
	else if (nextState == cookingextended)
	{
		unsigned seconds = timerState->getSeconds();

		delete currentState;
		delete lightState;
		delete buttonState;
		delete doorState;
		delete ovenState;
		delete timerState;
		delete alarmState;

		currentState = new CookingExtendedState();
		lightState 	 = new LightOnState();
		buttonState  = new ButtonActiveState();
		doorState 	 = new DoorClosedState();
		ovenState 	 = new OvenCookingState();
		timerState 	 = new TimerExtendedState(seconds);
		alarmState 	 = new AlarmIdleState();
	}
	else if (nextState == idlebeeping)
	{
		delete currentState;
		delete lightState;
		delete buttonState;
		delete doorState;
		delete ovenState;
		delete timerState;
		delete alarmState;

		currentState = new IdleBeepingState();
		lightState 	 = new LightOffState();
		buttonState  = new ButtonDisabledState();
		doorState 	 = new DoorClosedState();
		ovenState 	 = new OvenOffState();
		timerState 	 = new TimerOffState();
		alarmState 	 = new AlarmBeepingState();
	}
}

string stateMachine::getMwState()
{
	return currentState->getName();
}

string stateMachine::getLightState()
{
	return lightState->getName();
}

string stateMachine::getButtonState()
{
	return buttonState->getName();
}

string stateMachine::getDoorState()
{
	return doorState->getName();
}

string stateMachine::getOvenState()
{
	return ovenState->getName();
}

string stateMachine::getTimerState()
{
	return timerState->getName();
}

string stateMachine::getAlarmState()
{
	return alarmState->getName();
}

bool stateMachine::isCooking()
{
	return ovenState->getPower();
}

bool stateMachine::isBeeping()
{
	return alarmState->isBeeping();
}

string stateMachine::getTime()
{
	return timerState->getTime();
}

void stateMachine::substractSec()
{
	bool substracted = false;
	if (isCooking() && timerState->getSeconds() > 0 )
	{
		substracted = timerState->substractSec();
	}

    if(!substracted)
	{
        expiresTime();
	}
}

void stateMachine::beep()
{
	bool beeping = false;
	if ( isBeeping() )
	{
		beeping = alarmState->beep();
	}
	if ( !beeping )
	{
		finishBeeping();
	}
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

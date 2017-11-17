//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwIdleBeeping.cpp
*/

#pragma hdrstop

#include "mwIdleBeeping.h"

IdleBeepingState::IdleBeepingState()
{
    id = 5;
	name = "IDLE - Beeping Alarm";
}

IdleBeepingState::~IdleBeepingState()
{
}

int IdleBeepingState::getId()
{
	return id;
}

string IdleBeepingState::getName()
{
	return name;
}

MWStates IdleBeepingState::getNextState(IOACTION action)
{
	//States: idle, opendoor, cooking, cookingextended, idlebeeping, withoutchange
	if (action == OPENDOOR)
	{
		return getMwState("opendoor");
	}
	else if (action == CLOSEDOOR)
	{
		return getMwState("withoutchange");
	}
	else if (action == PUSHBUTTON)
	{
		return getMwState("withoutchange");
	}
	else if (action == EXPIRESTIME)
	{
		return getMwState("withoutchange");
	}
	else if (action == FINISHBEEPING)
	{
		return getMwState("idle");
	}

}
//---------------------------------------------------------------------------
#pragma package(smart_init)

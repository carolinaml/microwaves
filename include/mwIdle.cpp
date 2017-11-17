//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwIdle.cpp
*/

#pragma hdrstop

#include "mwIdle.h"

IdleState::IdleState()
{
    id = 1;
	name = "IDLE";
}

IdleState::~IdleState()
{
}

int IdleState::getId()
{
	return id;
}

string IdleState::getName()
{
	return name;
}

MWStates IdleState::getNextState(IOACTION action)
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
		return getMwState("cooking");
	}
	else if (action == EXPIRESTIME)
	{
		return getMwState("withoutchange");
	}
	else if (action == FINISHBEEPING)
	{
		return getMwState("withoutchange");
	}
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwCooking.cpp
*/

#pragma hdrstop

#include "mwCooking.h"

CookingState::CookingState()
{
    id = 3;
	name = "COOKING";
}

CookingState::~CookingState()
{
}

int CookingState::getId()
{
	return id;
}

string CookingState::getName()
{
	return name;
}

MWStates CookingState::getNextState(IOACTION action)
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
		return getMwState("cookingextended");
	}
	else if (action == EXPIRESTIME)
	{
		return getMwState("idlebeeping");
	}
	else if (action == FINISHBEEPING)
	{
		return getMwState("withoutchange");
	}

}

//---------------------------------------------------------------------------
#pragma package(smart_init)

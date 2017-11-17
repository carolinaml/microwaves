//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwCookingExtended.cpp
*/

#pragma hdrstop

#include <iostream>
#include "mwCookingExtended.h"

CookingExtendedState::CookingExtendedState()
{
    id = 4;
	name = "Cooking With Extended Time";
}

CookingExtendedState::~CookingExtendedState()
{

}

int CookingExtendedState::getId()
{
	return id;
}

string CookingExtendedState::getName()
{
	return name;
}

MWStates CookingExtendedState::getNextState(IOACTION action)
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

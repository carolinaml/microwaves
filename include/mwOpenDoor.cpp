//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwOpenDoor.cpp
*/

#pragma hdrstop

#include "mwOpenDoor.h"

OpenDoorState::OpenDoorState()
{
    id = 2;
	name = "WITH OPEN DOOR";
}

OpenDoorState::~OpenDoorState()
{
}

int OpenDoorState::getId()
{
	return id;
}

string OpenDoorState::getName()
{
	return name;
}

MWStates OpenDoorState::getNextState(IOACTION action)
{
	//States: idle, opendoor, cooking, cookingextended, idlebeeping, withoutchange
	if (action == OPENDOOR)
	{
		return getMwState("withoutchange");
	}
	else if (action == CLOSEDOOR)
	{
		return getMwState("idle");
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
		return getMwState("withoutchange");
	}

}
//---------------------------------------------------------------------------
#pragma package(smart_init)

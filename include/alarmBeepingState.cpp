//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: alarmBeepingState.cpp
*/

#pragma hdrstop

#include "AlarmBeepingState.h"

AlarmBeepingState::AlarmBeepingState()
{
	id = 2;
	beeping = true;
	name = "BEEPING";
    count = 0;
}

AlarmBeepingState::~AlarmBeepingState()
{
}

int AlarmBeepingState::getId()
{
	return id;
}

bool AlarmBeepingState::isBeeping()
{
    return beeping;
}

string AlarmBeepingState::getName()
{
    return name;
}

bool AlarmBeepingState::beep()
{
	if ( count < 3 )
	{
		count++;
		return true;
	}
	else
	{
		count = 0;
        return false;
	}
}

int AlarmBeepingState::rcount()
{
    return count;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

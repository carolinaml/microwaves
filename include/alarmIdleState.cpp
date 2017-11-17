//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: alarmIdleState.cpp
*/

#pragma hdrstop

#include "AlarmIdleState.h"
#include "IAlarmState.h"

AlarmIdleState::AlarmIdleState()
{
	id = 1;
	beeping = false;
	name = "IDLE";
	count = 0;
}

AlarmIdleState::~AlarmIdleState()
{
}

int AlarmIdleState::getId()
{
	return id;
}

bool AlarmIdleState::isBeeping()
{
    return beeping;
}

string AlarmIdleState::getName()
{
	return name;
}

bool AlarmIdleState::beep()
{
	return false;
}

int AlarmIdleState::rcount()
{
    return count;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

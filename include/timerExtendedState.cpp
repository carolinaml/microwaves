//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerExtendedState.cpp
*/

#pragma hdrstop

#include "timerExtendedState.h"

TimerExtendedState::TimerExtendedState(unsigned seconds)
{
	id = 2;
	s = 0;
	m = 0;
	extended = true;
	name = "EXTENDED";
	sw = new swTime(seconds+30);
}

TimerExtendedState::~TimerExtendedState()
{
}

int TimerExtendedState::getId()
{
	return id;
}

string TimerExtendedState::getTime()
{
    return sw->getTime();
}

unsigned TimerExtendedState::getSeconds()
{
	return sw->getSeconds();
}

string TimerExtendedState::getName()
{
	return name;
}

bool TimerExtendedState::isExtended()
{
    return extended;
}

bool TimerExtendedState::substractSec()
{
	return sw->substractSec();
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

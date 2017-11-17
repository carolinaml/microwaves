//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerActiveState.cpp
*/

#pragma hdrstop

#include "timerActiveState.h"

TimerActiveState::TimerActiveState()
{
	id = 2;
	s = 0;
	m = 1;
	extended = false;
	name = "ACTIVE";

	unsigned hours = 00, minutes = 00, seconds = 3;
	sw = new swTime(hours,minutes,seconds);
}

TimerActiveState::~TimerActiveState()
{
}

int TimerActiveState::getId()
{
	return id;
}

string TimerActiveState::getTime()
{
    return sw->getTime();
}

string TimerActiveState::getName()
{
    return name;
}

bool TimerActiveState::isExtended()
{
    return extended;
}

unsigned TimerActiveState::getSeconds()
{
	return sw->getSeconds();
}

bool TimerActiveState::substractSec()
{
	return sw->substractSec();
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerOffState.cpp
*/

#pragma hdrstop

#include "timerOffState.h"

TimerOffState::TimerOffState()
{
	id = 2;
	s = 0;
	m = 0;
	extended = false;
	name = "OFF";
	unsigned hours = 00, minutes = 00, seconds = 0;
	sw = new swTime(hours,minutes,seconds);
}

TimerOffState::~TimerOffState()
{
}

int TimerOffState::getId()
{
	return id;
}

string TimerOffState::getName()
{
	return name;
}

string TimerOffState::getTime()
{
	return sw->getTime();
}

bool TimerOffState::isExtended()
{
    return extended;
}

unsigned TimerOffState::getSeconds()
{
	return sw->getSeconds();
}

bool TimerOffState::substractSec()
{
	return false;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

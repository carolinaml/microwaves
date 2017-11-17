//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ovenOffState.cpp
*/

#pragma hdrstop

#include "ovenOffState.h"

OvenOffState::OvenOffState()
{
	id = 1;
    power = false;
	name = "OFF";
}

OvenOffState::~OvenOffState()
{
}

int OvenOffState::getId()
{
	return id;
}

bool OvenOffState::getPower()
{
	return power;
}

string OvenOffState::getName()
{
	return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

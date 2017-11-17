//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ovenCookingState.cpp
*/

#pragma hdrstop

#include "ovenCookingState.h"

OvenCookingState::OvenCookingState()
{
	id = 2;
	power = true;
	name = "COOKING";
}

OvenCookingState::~OvenCookingState()
{
}

int OvenCookingState::getId()
{
	return id;
}

bool OvenCookingState::getPower()
{
    return power;
}

string OvenCookingState::getName()
{
	return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

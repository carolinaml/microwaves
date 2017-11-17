//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: lightOffState.cpp
*/

#pragma hdrstop

#include "lightOffState.h"

LightOffState::LightOffState()
{
	id = 1;
	power = false;
	name = "OFF";
}

LightOffState::~LightOffState()
{
}

int LightOffState::getId()
{
	return id;
}

bool LightOffState::getPower()
{
	return power;
}

string LightOffState::getName()
{
	return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: lightOnState.cpp
*/

#pragma hdrstop

#include "lightOnState.h"
#include "ILightState.h"

LightOnState::LightOnState()
{
	id = 2;
	power = true;
	name = "ON";
}

LightOnState::~LightOnState()
{
}

int LightOnState::getId()
{
	return id;
}

bool LightOnState::getPower()
{
    return power;
}

string LightOnState::getName()
{
	return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

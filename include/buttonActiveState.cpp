//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ButtonActiveState.cpp
*/

#pragma hdrstop

#include "ButtonActiveState.h"
#include "IButtonState.h"

ButtonActiveState::ButtonActiveState()
{
	id = 2;
	actived = true;
	name = "ACTIVED";
}

ButtonActiveState::~ButtonActiveState()
{
}

int ButtonActiveState::getId()
{
	return id;
}

bool ButtonActiveState::isActived()
{
    return actived;
}

string ButtonActiveState::getName()
{
    return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: buttonDisabledState.cpp
*/

#pragma hdrstop

#include "buttonDisabledState.h"

ButtonDisabledState::ButtonDisabledState()
{
	id = 1;
	actived = false;
	name = "DISABLED";
}

ButtonDisabledState::~ButtonDisabledState()
{
}

int ButtonDisabledState::getId()
{
	return id;
}

bool ButtonDisabledState::isActived()
{
    return actived;
}

string ButtonDisabledState::getName()
{
    return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

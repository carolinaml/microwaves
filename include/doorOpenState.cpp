//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: doorOpenState.cpp
*/

#pragma hdrstop

#include "doorOpenState.h"

DoorOpenState::DoorOpenState()
{
	id = 2;
	opened = true;
	name = "OPEN";
}

DoorOpenState::~DoorOpenState()
{
}

int DoorOpenState::getId()
{
	return id;
}

bool DoorOpenState::isOpen()
{
    return opened;
}

string DoorOpenState::getName()
{
    return name;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

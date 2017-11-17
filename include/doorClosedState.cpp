//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: doorClosedState.cpp
*/

#pragma hdrstop

#include "doorClosedState.h"

DoorClosedState::DoorClosedState()
{
	id = 1;
    opened = false;
	name = "CLOSED";
}

DoorClosedState::~DoorClosedState()
{
}

int DoorClosedState::getId()
{
	return id;
}

bool DoorClosedState::isOpen()
{
	return opened;
}

string DoorClosedState::getName()
{
	return name;
}


//---------------------------------------------------------------------------
#pragma package(smart_init)

/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: IOActions.cpp
//      For entry Actions
*/

#ifndef IOACTIONS_H
#define IOACTIONS_H
#include <string>

enum IOACTION { OPENDOOR, CLOSEDOOR, PUSHBUTTON, EXPIRESTIME, FINISHBEEPING };

static IOACTION getAction(std::string name)
{
	if (name == "OPENDOOR")
    {
		return IOACTION::OPENDOOR;
    }
	else if (name == "CLOSEDOOR")
    {
		return IOACTION::CLOSEDOOR;
    }
	else if (name == "PUSHBUTTON")
	{
		return IOACTION::PUSHBUTTON;
    }
	else if (name == "EXPIRESTIME")
    {
		return IOACTION::EXPIRESTIME;
	}
	else if (name == "FINISHBEEPING")
	{
		return IOACTION::FINISHBEEPING;
	}
}

#endif //IOACTIONS_H

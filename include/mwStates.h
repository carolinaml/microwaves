/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwStates.h
//		For microwaves states
*/

#ifndef MWStates_H
#define MWStates_H
#include <string>

enum MWStates { idle, opendoor, cooking, cookingextended, idlebeeping, withoutchange };

static MWStates getMwState(std::string state)
{
	if (state == "idle")
	{
		return MWStates::idle;
    }
	else if (state == "opendoor")
    {
		return MWStates::opendoor;
    }
	else if (state == "cooking")
	{
		return MWStates::cooking;
    }
	else if (state == "cookingextended")
    {
		return MWStates::cookingextended;
	}
	else if (state == "idlebeeping")
	{
		return MWStates::idlebeeping;
	}
	else if (state == "withoutchange")
	{
		return MWStates::withoutchange;
	}
}

#endif //MWStates_H

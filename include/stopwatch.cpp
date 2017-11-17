//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: stopwatch.cpp
*/

#pragma hdrstop

#include "stopwatch.h"

swTime::swTime(unsigned hh=0, unsigned mm=0, unsigned ss=0):h(hh),m(mm),s(ss)
{

}

swTime::swTime(unsigned seconds = 0)
{
	setTimefromSeconds(seconds);
}

swTime::~swTime()
{
}

swTime swTime::operator-(swTime t2)
{
	unsigned sec1 = getSeconds();
	unsigned sec2 = t2.getSeconds();
	return getTimefromSeconds(sec2 > sec1 ? sec2 - sec1 : sec1 - sec2);
}

void swTime::addTime(unsigned seconds)
{
	h += getHourfromSeconds(seconds);
	m += getMinfromSeconds(seconds);
	s += getSecModfromSeconds(seconds);
}

unsigned swTime::getSeconds()
{
	return(h*3600+m*60+s);
}

unsigned swTime::getMilliSeconds()
{
	return(getSeconds()*1000);
}

void swTime::setTime(unsigned hh, unsigned mm, unsigned ss)
{
	h = hh;
	m = mm;
	s = ss;
}

void swTime::display()
{
	cout << h <<":" << m << ":" << s << endl;
}

string swTime::getTime()
{
	ostringstream hh;
	hh << h;
	ostringstream mm;
	mm << m;
	ostringstream ss;
	ss << s;
	return (hh.str()+":"+mm.str()+":"+ss.str());
}

swTime swTime::getTimefromSeconds(unsigned seconds=0)
{
	unsigned hour, minute;
	hour = seconds / 3600 ;
	seconds = seconds % 3600 ;
	minute = seconds / 60 ;
	seconds = seconds % 60;
	return swTime(hour, minute, seconds);
}

void swTime::setTimefromSeconds(unsigned seconds=0)
{
	unsigned hour, minute;
	h = seconds / 3600 ;
	seconds = seconds % 3600 ;
	m = seconds / 60 ;
	s = seconds % 60;
}

unsigned swTime::getHourfromSeconds(unsigned seconds=0)
{
	return seconds / 3600 ;
}

unsigned swTime::getMinfromSeconds(unsigned seconds=0)
{
	unsigned hour;
	hour = seconds / 3600 ;
	seconds = seconds % 3600 ;
	return seconds / 60 ;
}

unsigned swTime::getSecModfromSeconds(unsigned seconds=0)
{
	unsigned hour;//, minute;
	//hour = seconds / 3600 ;
	seconds = seconds % 3600 ;
	//minute = seconds / 60 ;
	return seconds % 60;
}

bool swTime::substractSec()
{
	if (getSeconds() > 0 ) 
	{   
		s--;
        return true;
	}
	else
	{
		return false;
	}
}  
//---------------------------------------------------------------------------
#pragma package(smart_init)

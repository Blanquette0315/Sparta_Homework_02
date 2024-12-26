#include "pch.h"
#include "CDog.h"

CDog::CDog()
{
	SetName("∞ªæÛ¡„");
	SetSound("∏€! ∏€! π∂! ø–! (^§µ^)\n");
}

CDog::~CDog()
{
}

void CDog::makeSound()
{
	CAnimal::makeSound();
	cout << "æÍ¥¬ ∏ÿπ≥πÃø©∂Û.. (¿Á¡§¿««— «‘ºˆ∏¶ ∫∏±‚ ¿ß«— æ»≥ªπÆ¿‘¥œ¥Ÿ..)\n\n";
}
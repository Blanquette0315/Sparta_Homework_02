#include "pch.h"
#include "CWaterdeer.h"

CWaterdeer::CWaterdeer()
{
	SetName("고라니");
	SetSound("그르아아아아아아아아아아아ㅏ아악!!!!! 끄르아아ㅏ아아아아아아아앙아ㅏㄱ! (º A º)\n");
}

CWaterdeer::~CWaterdeer()
{
}

void CWaterdeer::makeSound()
{
	CAnimal::makeSound();
	cout << "얘는 고라니여라.. (재정의한 함수를 보기 위한 안내문입니다..)\n\n";
}
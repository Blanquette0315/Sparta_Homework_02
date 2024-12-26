#include "pch.h"
#include "CCat.h"

CCat::CCat()
{
	SetName("고양이");
	SetSound("야. 옹. (ㅡxㅡ)\n");
}

CCat::~CCat()
{
}

void CCat::makeSound()
{
	CAnimal::makeSound();
	cout << "얘는 고앙이여라.. (재정의한 함수를 보기 위한 안내문입니다..)\n\n";
}
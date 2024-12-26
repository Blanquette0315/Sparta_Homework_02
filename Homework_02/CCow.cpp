#include "pch.h"
#include "CCow.h"

CCow::CCow()
{
	SetName("소오");
	SetSound("Yhea~! (ㅁ-ㅁ)\n");
}

CCow::~CCow()		 
{					 
}					 
					 
void CCow::makeSound()
{
	CAnimal::makeSound();
	cout << "얘는 소여라.. (재정의한 함수를 보기 위한 안내문입니다..)\n\n";
}
#include "pch.h"
#include "CCow.h"

CCow::CCow()
{
	SetName("�ҿ�");
	SetSound("Yhea~! (��-��)\n");
}

CCow::~CCow()		 
{					 
}					 
					 
void CCow::makeSound()
{
	CAnimal::makeSound();
	cout << "��� �ҿ���.. (�������� �Լ��� ���� ���� �ȳ����Դϴ�..)\n\n";
}
#include "pch.h"
#include "CWaterdeer.h"

CWaterdeer::CWaterdeer()
{
	SetName("����");
	SetSound("�׸��ƾƾƾƾƾƾƾƾƾƾƤ��ƾ�!!!!! �����ƾƤ��ƾƾƾƾƾƾƾӾƤ���! (�� A ��)\n");
}

CWaterdeer::~CWaterdeer()
{
}

void CWaterdeer::makeSound()
{
	CAnimal::makeSound();
	cout << "��� ���Ͽ���.. (�������� �Լ��� ���� ���� �ȳ����Դϴ�..)\n\n";
}
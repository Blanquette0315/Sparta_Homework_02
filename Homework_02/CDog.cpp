#include "pch.h"
#include "CDog.h"

CDog::CDog()
{
	SetName("������");
	SetSound("��! ��! ��! ��! (^��^)\n");
}

CDog::~CDog()
{
}

void CDog::makeSound()
{
	CAnimal::makeSound();
	cout << "��� �ع��̿���.. (�������� �Լ��� ���� ���� �ȳ����Դϴ�..)\n\n";
}
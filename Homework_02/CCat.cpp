#include "pch.h"
#include "CCat.h"

CCat::CCat()
{
	SetName("�����");
	SetSound("��. ��. (��x��)\n");
}

CCat::~CCat()
{
}

void CCat::makeSound()
{
	CAnimal::makeSound();
	cout << "��� ����̿���.. (�������� �Լ��� ���� ���� �ȳ����Դϴ�..)\n\n";
}
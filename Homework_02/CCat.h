#pragma once
#include "CAnimal.h"

// �޸� ������ �����ʰ� �־��� ������ �Ҹ��ڰ� ȣ���� ���� �ʾƵ� ������ ���� �ʾҴ��� ����.

class CCat :
    public CAnimal
{
public:
    virtual void makeSound() override;

public:
    CCat();
    virtual ~CCat();
};
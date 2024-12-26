#pragma once
#include "CAnimal.h"

class CDog :
    public CAnimal
{
public:
    virtual void makeSound() override;

public:
    CDog();
    virtual ~CDog();
};
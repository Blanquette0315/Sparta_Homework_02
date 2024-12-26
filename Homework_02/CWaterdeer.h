#pragma once
#include "CAnimal.h"

class CWaterdeer :
    public CAnimal
{
public:
    virtual void makeSound() override;

public:
    CWaterdeer();
    virtual ~CWaterdeer();
};
#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include "products/MethodUnit.h"

class CppMethodUnit: public MethodUnit
{
public:
    CppMethodUnit(const std::string& name, const std::string& returnType, Flags flags );
};

#endif // CPPMETHODUNIT_H

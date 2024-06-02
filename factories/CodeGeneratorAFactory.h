#ifndef CODEGENERATORAFACTORY_H
#define CODEGENERATORAFACTORY_H
#include "products/ClassUnit.h"
#include "products/MethodUnit.h"
#include "products/PrintOperatorUnit.h"

class CodeGeneratorAFactory
{
public:
    CodeGeneratorAFactory();
    virtual ClassUnit * createClassUnit() = 0;
    virtual MethodUnit* createMethodUnit() = 0;
    virtual PrintOperatorUnit* createPrintOperatorUnit() = 0;

    virtual ~CodeGeneratorAFactory() {}
};

#endif // CODEGENERATORAFACTORY_H

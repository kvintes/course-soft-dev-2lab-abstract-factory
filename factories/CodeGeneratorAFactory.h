#ifndef CODEGENERATORAFACTORY_H
#define CODEGENERATORAFACTORY_H
#include "products/ClassUnit.h"
#include "products/MethodUnit.h"
#include "products/PrintOperatorUnit.h"

class CodeGeneratorAFactory
{
public:
    CodeGeneratorAFactory();
    virtual std::shared_ptr<ClassUnit> createClassUnit(const std::string& name) = 0;
    virtual std::shared_ptr<MethodUnit> createMethodUnit(
        const std::string& name,
        const std::string& returnType,
        Unit::Flags flags
    ) = 0;
    virtual std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) = 0;

    virtual ~CodeGeneratorAFactory()=default;
};

#endif // CODEGENERATORAFACTORY_H

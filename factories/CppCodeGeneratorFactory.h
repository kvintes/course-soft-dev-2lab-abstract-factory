#ifndef CPPCODEGENERATORFACTORY_H
#define CPPCODEGENERATORFACTORY_H
#include "CodeGeneratorAFactory.h"
#include "products/cpp/CppClassUnit.h"
#include "products/cpp/CppMethodUnit.h"
#include "products/cpp/CppPrintOperatorUnit.h"

class CppCodeGeneratorFactory: public CodeGeneratorAFactory
{
public:
    virtual std::shared_ptr< ClassUnit > createClassUnit( const std::string& name ) {
        return std::shared_ptr< ClassUnit >( new CppClassUnit( name ) );
    }

    virtual std::shared_ptr< MethodUnit > createMethodUnit(
        const std::string& name,
        const std::string& returnType,
        Unit::Flags flags
        ) {
        return std::shared_ptr< MethodUnit >( new CppMethodUnit( name, returnType, flags ) );
    }

    virtual std::shared_ptr< PrintOperatorUnit > createPrintOperatorUnit( const std::string& text ) {
        return std::shared_ptr< PrintOperatorUnit >( new CppPrintOperatorUnit( text ) );
    }
};

#endif // CPPCODEGENERATORFACTORY_H

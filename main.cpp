#include <QCoreApplication>
#include <iostream>
#include "factories/CppCodeGeneratorFactory.h"
#include "factories/CodeGeneratorAFactory.h"
#include "products/MethodUnit.h"
using namespace std;

std::string generateProgram( const std::shared_ptr< CodeGeneratorAFactory >& factory ) {
    auto myClass = factory->createClassUnit( "MyClass" );
    myClass->add(
        factory->createMethodUnit( "testFunc1", "void", MethodUnit::STATIC  ),
        ClassUnit::PUBLIC
        );
    myClass->add(
        factory->createMethodUnit( "testFunc2", "void", MethodUnit::STATIC  ),
        ClassUnit::PRIVATE
        );
    myClass->add(
        factory->createMethodUnit( "testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST ),
        ClassUnit::PUBLIC
        );

    std::shared_ptr< MethodUnit > method = factory->createMethodUnit( "testFunc4", "void", MethodUnit::STATIC );
    method->add( factory->createPrintOperatorUnit( R"(Hello, world!\n)" ) );
    myClass->add( method, ClassUnit::PROTECTED );

    return myClass->compile();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout<<"w"<<std::endl;
    // std::cout << generateProgram( std::shared_ptr< CppCodeGeneratorFactory >() )<<"feaw" << std::endl;
    return 0;
    return a.exec();
}

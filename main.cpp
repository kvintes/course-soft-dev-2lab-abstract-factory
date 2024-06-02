#include <QCoreApplication>
#include <iostream>
#include "products\ClassUnit.h"
#include "products\MethodUnit.h"
#include "products\PrintOperatorUnit.h"
#include "factories\CppCodeGeneratorFactory.h"
using namespace std;
std::string generateProgram() {
    // ClassUnit* classUnit = factory.createClassUnit();
    // MethodUnit* methodUnit = factory.createMethodUnit();
    // PrintOperatorUnit* printOperatorUnit = factory.createPrintOperatorUnit();
    // ClassUnit myClass( "MyClass" );
    // myClass.add(
    //     std::make_shared< MethodUnit >( "testFunc1", "void", 0 ),
    //     ClassUnit::PUBLIC
    //     );
    // myClass.add(
    //     std::make_shared< MethodUnit >( "testFunc2", "void", MethodUnit::STATIC ),
    //     ClassUnit::PRIVATE
    //     );
    // myClass.add(
    //     std::make_shared< MethodUnit >( "testFunc3", "void", MethodUnit::VIRTUAL |
    //                                                           MethodUnit::CONST ),
    //     ClassUnit::PUBLIC
    //     );
    // auto method = std::make_shared< MethodUnit >( "testFunc4", "void",
    //                                            MethodUnit::STATIC );
    // method->add( std::make_shared< PrintOperatorUnit >( R"(Hello, world!\n)" ) );
    // myClass.add( method, ClassUnit::PROTECTED );
    // return myClass.compile();
    return "";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // CodeGeneratorAFactory *cppFactory = ;
    // std::cout << generateProgram(&cppFactory) << std::endl;
    return a.exec();
}

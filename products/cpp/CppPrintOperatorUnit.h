#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include "products/PrintOperatorUnit.h"

class CppPrintOperatorUnit: public PrintOperatorUnit
{
public:
    CppPrintOperatorUnit(const std::string& text );
    std::string compile( unsigned int level = 0 ) const {
        return generateShift( level ) + "printf( \"" + getText() + "\" );\n";
    }
};

#endif // CPPPRINTOPERATORUNIT_H

#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H
#include "products/ClassUnit.h"

class CppClassUnit: public ClassUnit
{
public:
    CppClassUnit( const std::string& name );

    std::string compile( unsigned int level = 0 ) const {
        std::string result = generateShift( level ) + "class " + getName() + " {\n";
        for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {
            if( getFields( i ).empty() ) {
                continue;
            }

            result += ACCESS_MODIFIERS[ i ] + ":\n";
            for( const auto& f : getFields( i ) ) {
                result += f->compile( level + 1 );
            }

            result += "\n";
        }
        result += generateShift( level ) + "};\n";

        return result;
    }
};

#endif // CPPCLASSUNIT_H

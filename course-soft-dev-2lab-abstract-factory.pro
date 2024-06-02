QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        examples/CppMyClass.cpp \
        factories/CppCodeGeneratorFactory.cpp \
        products/ClassUnit.cpp \
        products/ClassUnit.cpp \
        products/MethodUnit.cpp \
        products/MethodUnit.cpp \
        products/PrintOperatorUnit.cpp \
        products/PrintOperatorUnit.cpp \
        products/Unit.cpp \
        products/Unit.cpp \
        examples/CppMyClass.cpp \
        factories/CSharpCodeGeneratorFactory.cpp \
        factories/CodeGeneratorAFactory.cpp \
        factories/JavaCodeGeneratorFactory.cpp \
        main.cpp \
        products/cpp/CppClassUnit.cpp \
        products/cpp/CppMethodUnit.cpp \
        products/cpp/CppPrintOperatorUnit.cpp \
        products/cpp/CppUnit.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    examples/CppMyClass.h \
    factories/CppCodeGeneratorFactory.h \
    products/ClassUnit.h \
    products/ClassUnit.h \
    products/MethodUnit.h \
    products/MethodUnit.h \
    examples/CppMyClass.h \
    products/PrintOperatorUnit.h \
    products/PrintOperatorUnit.h \
    products/Unit.h \
    products/Unit.h \
    factories/CSharpCodeGeneratorFactory.h \
    factories/CodeGeneratorAFactory.h \
    factories/JavaCodeGeneratorFactory.h \
    products/cpp/CppClassUnit.h \
    products/cpp/CppMethodUnit.h \
    products/cpp/CppPrintOperatorUnit.h \
    products/cpp/CppUnit.h

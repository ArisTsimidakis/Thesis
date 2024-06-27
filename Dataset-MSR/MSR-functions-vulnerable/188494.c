VAR1::~FUN1()

{

    VAR2& VAR3 = const_cast<VAR2&>(VAR4);

    VAR3.FUN2();








 

    VAR5** VAR6 = VAR7;

    VAR5** const VAR8 = VAR9;




 

    while (VAR6 != VAR8) {

        VAR5* const VAR10 = *VAR6++;

        delete VAR10;

    }




 

    delete [] VAR7;


















 }
bool VAR1::FUN1(

    VAR2* VAR3,

    long long& VAR4,

    unsigned long VAR5,

    long long& VAR6)

{

    assert(VAR3);

    assert(VAR4 >= 0);


 

    long long VAR7, VAR8;










 

    const long VAR9 = VAR3->FUN2(&VAR7, &VAR8);

    assert(VAR9 >= 0);

    assert((VAR7 < 0) || (VAR8 <= VAR7));

    if (VAR9 < 0)

        return false;


 

    long VAR10;










 

    const long long VAR11 = FUN3(VAR3, VAR4, VAR10);

    assert(VAR11 >= 0);

    assert(VAR10 > 0);

    assert(VAR10 <= 8);

    assert((VAR4 + VAR10) <= VAR8);




 

    if ((unsigned long)VAR11 != VAR5)

        return false;


 

    VAR4 += VAR10;  












 

    const long long VAR12 = FUN3(VAR3, VAR4, VAR10);

    assert(VAR12 >= 0);

    assert(VAR12 <= 8);

    assert(VAR10 > 0);

    assert(VAR10 <= 8);

    assert((VAR4 + VAR10) <= VAR8);


 

    VAR4 += VAR10;  




 

    VAR6 = FUN4(VAR3, VAR4, VAR12);

    assert(VAR6 >= 0);


 

    VAR4 += VAR12;  



    return true;


 }
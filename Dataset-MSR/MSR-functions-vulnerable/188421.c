bool VAR1::FUN1(

    VAR2* VAR3,

    long long& VAR4,

    unsigned long VAR5,

    unsigned char*& VAR6,

    VAR7& VAR8)

{

    assert(VAR3);

    assert(VAR4 >= 0);








 

    long long VAR9, VAR10;


 

    long VAR11 = VAR3->FUN2(&VAR9, &VAR10);

    assert(VAR11 >= 0);

    assert((VAR9 < 0) || (VAR10 <= VAR9));

    if (VAR11 < 0)

        return false;










 

    long VAR12;

    const long long VAR13 = FUN3(VAR3, VAR4, VAR12);

    assert(VAR13 >= 0);

    assert(VAR12 > 0);

    assert(VAR12 <= 8);

    assert((VAR4 + VAR12) <= VAR10);












 

    if ((unsigned long)VAR13 != VAR5)

        return false;




 

    VAR4 += VAR12;  


 

    const long long VAR14 = FUN3(VAR3, VAR4, VAR12);

    assert(VAR14 >= 0);

    assert(VAR12 > 0);

    assert(VAR12 <= 8);

    assert((VAR4 + VAR12) <= VAR10);










 

    VAR4 += VAR12;  

    assert((VAR4 + VAR14) <= VAR10);




 

    const long VAR15 = static_cast<long>(VAR14);


 

    VAR6 = new (VAR16::VAR17) unsigned char[VAR15];

    assert(VAR6);  




 

    VAR11 = VAR3->FUN4(VAR4, VAR15, VAR6);

    assert(VAR11 == 0);  




 

    VAR8 = VAR15;


 

    VAR4 += VAR14;  

    return true;




 }
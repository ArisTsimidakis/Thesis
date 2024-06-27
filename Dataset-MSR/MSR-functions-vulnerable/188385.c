long long VAR1::FUN1(const VAR2* VAR3) const

{

    assert(VAR3);


 

    const long long VAR4 = FUN2(VAR3);






 

    const VAR5* const VAR6 = VAR3->VAR7;

    const VAR8* const VAR9 = VAR6->FUN3();

    assert(VAR9);




 

    const long long VAR10 = VAR9->FUN4();

    assert(VAR10 >= 1);


 

    const long long VAR11 = VAR4 * VAR10;



    return VAR11;


 }
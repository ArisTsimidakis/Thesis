long long VAR1::FUN1() const

{

    const VAR2* VAR3;



    const long VAR4 = FUN2(VAR3);



    if (VAR4 < 0)  

        return VAR4;



    if (VAR3 == NULL)  

        return FUN3();



    const VAR5* const VAR6 = VAR3->FUN4();

    assert(VAR6);



    return VAR6->FUN3(this);

}
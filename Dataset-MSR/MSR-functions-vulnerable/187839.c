const VAR1* VAR2::FUN1(const VAR3& VAR4,
                                     const VAR3::VAR5& VAR6) const {
   assert(VAR7);



#if 0



    FUN2();



    if (VAR8 == NULL)

        return NULL;



    const long long VAR9 = VAR10;



    if (VAR9 <= 0)

        return NULL;



    const long long VAR11 = VAR4.FUN3();



    if ((VAR6.VAR12 > 0) && (VAR6.VAR12 <= VAR9))

    {

        const size_t VAR13 = static_cast<VAR14>(VAR6.VAR12);

        const size_t VAR15 = VAR13 - 1;



        const VAR1* const VAR16 = VAR8[VAR15];

        assert(VAR16);

        assert(!VAR16->FUN4());



        const VAR17* const VAR18 = VAR16->FUN5();

        assert(VAR18);



        if ((VAR18->FUN6() == VAR6.VAR19) &&

            (VAR18->FUN3(this) == VAR11))

        {

            return VAR16;

        }

    }



    const VAR1* const* VAR20 = VAR8;

    const VAR1* const* const VAR21 = VAR20 + VAR9;



    while (VAR20 != VAR21)

    {

#ifdef VAR22

        const ptrdiff_t VAR23 = VAR20 - VAR8;

        VAR23;

#endif



        const VAR1* const VAR16 = *VAR20++;

        assert(VAR16);

        assert(!VAR16->FUN4());



        const VAR17* const VAR18 = VAR16->FUN5();

        assert(VAR18);



        if (VAR18->FUN6() != VAR6.VAR19)

            continue;



        const long long VAR24 = VAR18->FUN3(this);

        assert(VAR24 >= 0);



        if (VAR24 < VAR11)

            continue;



        if (VAR24 > VAR11)

            return NULL;



        const VAR25* const VAR26 = VAR7->FUN7();

        assert(VAR26);



        const long VAR27 = static_cast<long>(VAR6.VAR19);

        const VAR28* const VAR29 = VAR26->FUN8(VAR27);



        if (VAR29 == NULL)

            return NULL;



        const long long VAR30 = VAR29->FUN9();



        if (VAR30 == 2)  

            return VAR16;



        if (VAR30 != 1)  

            return NULL;



        if (!VAR18->FUN10())

            return NULL;



        return VAR16;

    }



    return NULL;



#else


   const long long VAR11 = VAR4.FUN3();
 
   if (VAR6.VAR12 > 0) {
 const long VAR13 = static_cast<long>(VAR6.VAR12);
 const long VAR15 = VAR13 - 1;

 while (VAR15 >= VAR10) {
 long long VAR31;
 long VAR32;

 const long VAR33 = FUN11(VAR31, VAR32);

 if (VAR33 < 0) 
 return NULL;

 if (VAR33 > 0) 
 return NULL;
 }

 const VAR1* const VAR16 = VAR8[VAR15];
    assert(VAR16);
    assert(!VAR16->FUN4());

 const VAR17* const VAR18 = VAR16->FUN5();
    assert(VAR18);

 if ((VAR18->FUN6() == VAR6.VAR19) &&
 (VAR18->FUN3(this) == VAR11)) {
 return VAR16;
 }
 }

 long VAR15 = 0;

 for (;;) {
 if (VAR15 >= VAR10) {
 long long VAR31;
 long VAR32;

 const long VAR33 = FUN11(VAR31, VAR32);

 if (VAR33 < 0) 
 return NULL;

 if (VAR33 > 0) 
 return NULL;

      assert(VAR8);
      assert(VAR15 < VAR10);
 }

 const VAR1* const VAR16 = VAR8[VAR15];
    assert(VAR16);
    assert(!VAR16->FUN4());

 const VAR17* const VAR18 = VAR16->FUN5();
    assert(VAR18);

 if (VAR18->FUN6() != VAR6.VAR19) {
 ++VAR15;
 continue;
 }

 const long long VAR24 = VAR18->FUN3(this);

 if (VAR24 < VAR11) {
 ++VAR15;
 continue;
 }

 if (VAR24 > VAR11)
 return NULL;

 const VAR25* const VAR26 = VAR7->FUN7();
    assert(VAR26);

 const long VAR27 = static_cast<long>(VAR6.VAR19);
 const VAR28* const VAR29 = VAR26->FUN8(VAR27);

 if (VAR29 == NULL)
 return NULL;

 const long long VAR30 = VAR29->FUN9();

 if (VAR30 == 2) 
 return VAR16;

 if (VAR30 != 1) 
 return NULL;

 if (!VAR18->FUN10())
 return NULL;

 
     return VAR16;
   }



#endif
 }
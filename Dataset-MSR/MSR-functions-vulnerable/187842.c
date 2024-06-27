const VAR1* VAR2::FUN1() const {

  if (VAR3 == NULL)


     return NULL;
 

  if (VAR4 <= 0)

    return NULL;



#if 0

    FUN2();  



    const size_t VAR5 = VAR4 + VAR6;



    if (VAR5 == 0)  

        return NULL;



    const size_t VAR7 = VAR5 - 1;



    VAR1* const* const VAR8 = VAR3;

    assert(VAR8);



    VAR1* const VAR9 = VAR8[VAR7];

    assert(VAR9);



    VAR9->FUN3(VAR10->VAR11);

    assert(VAR9->FUN4() >= 0);

#else
   const long VAR7 = VAR4 - 1;
 
   VAR1* const* const VAR8 = VAR3;

  assert(VAR8);




 
   VAR1* const VAR9 = VAR8[VAR7];

  assert(VAR9);

  assert(VAR9->FUN4() >= 0);

#endif




 
   return VAR9;
 }
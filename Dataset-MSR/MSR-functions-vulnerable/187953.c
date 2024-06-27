static void FUN1(UNUSED_ATTR void *VAR1) {










   assert(VAR2 != NULL);
   assert(VAR3 != NULL);
 

  

  

  

  

  

  

  static const size_t VAR4 = 256;

  const char *VAR5[VAR4];

  size_t VAR6 = 0;

  size_t VAR7 = 0;


 
   pthread_mutex_lock(&VAR8);

  for (const VAR9 *VAR10 = FUN2(VAR2); VAR10 != FUN3(VAR2); VAR10 = FUN4(VAR10)) {

    const char *VAR11 = FUN5(VAR10);

    if (!FUN6(VAR11))

      continue;



    if (FUN7(VAR2, VAR11, "") ||

        FUN7(VAR2, VAR11, "") ||

        FUN7(VAR2, VAR11, "") ||

        FUN7(VAR2, VAR11, "") ||

        FUN7(VAR2, VAR11, "") ||

        FUN7(VAR2, VAR11, ""))

      continue;



    if (VAR6 < VAR4)

      VAR5[VAR6++] = VAR11;



    ++VAR7;

  }



  if (VAR7 > VAR4 * 2)

    while (VAR6 > 0)

      FUN8(VAR2, VAR5[--VAR6]);


   FUN9(VAR2, VAR12);
   pthread_mutex_unlock(&VAR8);
 }
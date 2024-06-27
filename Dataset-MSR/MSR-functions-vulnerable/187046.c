VAR1::VAR2 FUN1(const VAR1::VAR2& VAR3,
                                            const VAR1::VAR2& VAR4) {


   assert(!VAR3.FUN2());
   assert(!VAR4.FUN2());
 
   VAR1::VAR5<VAR1::VAR2> VAR6 = FUN3(VAR3);
   VAR1::wstring VAR7 = VAR8"" + VAR4 + VAR8"";

  for (size_t VAR9 = 1; VAR9 < VAR6.FUN4(); ++VAR9) {

    const VAR1::VAR2& VAR10 = VAR6[VAR9];






     if (VAR10.FUN5(0, VAR7.FUN4(), VAR7) == 0)
       return VAR10.FUN6(VAR7.FUN4());
   }

  return VAR1::FUN7();
}
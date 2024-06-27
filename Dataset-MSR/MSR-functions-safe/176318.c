static VAR1<VAR2> FUN1(VAR3* VAR4,
 VAR5<VAR6> VAR7,
 VAR5<VAR8> VAR9,
 uint32_t VAR10,
 uint32_t VAR11) {
 for (uint32_t VAR12 = VAR10; VAR12 < VAR11; ++VAR12) {
 VAR13 FUN2(VAR4, VAR7, VAR12);
 if (!VAR14.FUN3()) {
 continue;
 }
 VAR5<VAR8> VAR15;
    FUN4(
        VAR4, VAR15, VAR8::FUN5(&VAR14), VAR16<VAR2>());

 if (VAR9->FUN6(*VAR15)) return VAR17<VAR2>(VAR12);
 }


   return VAR17<VAR2>(-1);
 }
status_t VAR1::FUN1(
 off64_t VAR2, size_t VAR3) {
 if (VAR4 != NULL || VAR3 < 8) {
 return VAR5;
 }

 uint8_t VAR6[8];
 if (VAR7->FUN2(
                VAR2, VAR6, sizeof(VAR6)) < (VAR8)sizeof(VAR6)) {
 return VAR9;
 }

 if (FUN3(VAR6) != 0) {
 
 return VAR5;

     }
 
     VAR10 = FUN3(&VAR6[4]);

    uint64_t VAR11 = VAR10 * 2 * sizeof(VAR12);


     if (VAR11 > VAR13) {
         return VAR14;
     }
    VAR4 = new VAR12[VAR10 * 2];

 size_t VAR15 = sizeof(VAR12) * VAR10 * 2;
 if (VAR7->FUN2(
                VAR2 + 8, VAR4, VAR15) < (VAR8)VAR15) {
 return VAR9;
 }

 for (uint32_t VAR16 = 0; VAR16 < VAR10 * 2; ++VAR16) {
        VAR4[VAR16] = FUN4(VAR4[VAR16]);
 }

 return VAR17;
}
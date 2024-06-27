status_t VAR1::FUN1(
 off64_t VAR2, size_t VAR3) {
    FUN2("");

 if (VAR4 != NULL || VAR3 < 8) {
 return VAR5;
 }

 uint8_t VAR6[8];
 if (VAR7->FUN3(
                VAR2, VAR6, sizeof(VAR6))
 < (VAR8)sizeof(VAR6)) {
 return VAR9;
 }

 if (FUN4(VAR6) != 0) {
 
 return VAR5;
 }

 size_t VAR10 = FUN4(&VAR6[4]);

 if (VAR3 != (VAR10 + 1) * 8) {
 return VAR5;
 }

    VAR11 = VAR10;
 uint64_t VAR12 = VAR10 * 2 * (VAR13)sizeof(VAR14);
 if (VAR12 > VAR15) {
 return VAR16;
 }

    VAR4 = new VAR14[2 * VAR10];

 if (VAR7->FUN3(
                VAR2 + 8, VAR4, VAR10 * 8)
 < (VAR8)VAR10 * 8) {
 delete[] VAR4;
        VAR4 = NULL;

 return VAR9;
 }

 for (size_t VAR17 = 0; VAR17 < 2 * VAR10; ++VAR17) {
        VAR4[VAR17] = FUN5(VAR4[VAR17]);
 }

    VAR18->FUN6(
            VAR4, VAR11);

 return VAR19;
}
int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4,
 unsigned int VAR5, unsigned int VAR6) {
 unsigned char *VAR7;

 if (VAR3 + VAR5 <= VAR2->VAR5 && VAR4 + VAR6 <= VAR2->VAR6) {
    VAR2->VAR8 = VAR5;
    VAR2->VAR9 = VAR6;

 
 if (!(VAR2->VAR10 & VAR11)) {
      VAR2->VAR12[VAR13] =
          VAR2->VAR14 + VAR3 * VAR2->VAR15 / 8 + VAR4 * VAR2->VAR16[VAR13];
 } else {
 const int VAR17 =
 (VAR2->VAR10 & VAR18) ? 2 : 1;
      VAR7 = VAR2->VAR14;

 if (VAR2->VAR10 & VAR19) {
        VAR2->VAR12[VAR20] =
            VAR7 + VAR3 * VAR17 + VAR4 * VAR2->VAR16[VAR20];
        VAR7 += VAR2->VAR6 * VAR2->VAR16[VAR20];
 }

      VAR2->VAR12[VAR21] =
          VAR7 + VAR3 * VAR17 + VAR4 * VAR2->VAR16[VAR21];
      VAR7 += VAR2->VAR6 * VAR2->VAR16[VAR21];

 if (!(VAR2->VAR10 & VAR22)) {
        VAR2->VAR12[VAR23] =
            VAR7 + (VAR3 >> VAR2->VAR24) * VAR17 +
 (VAR4 >> VAR2->VAR25) * VAR2->VAR16[VAR23];
        VAR7 += (VAR2->VAR6 >> VAR2->VAR25) * VAR2->VAR16[VAR23];
        VAR2->VAR12[VAR26] =
            VAR7 + (VAR3 >> VAR2->VAR24) * VAR17 +
 (VAR4 >> VAR2->VAR25) * VAR2->VAR16[VAR26];
 } else {
        VAR2->VAR12[VAR26] =
            VAR7 + (VAR3 >> VAR2->VAR24) * VAR17 +
 (VAR4 >> VAR2->VAR25) * VAR2->VAR16[VAR26];
        VAR7 += (VAR2->VAR6 >> VAR2->VAR25) * VAR2->VAR16[VAR26];
        VAR2->VAR12[VAR23] =
            VAR7 + (VAR3 >> VAR2->VAR24) * VAR17 +
 (VAR4 >> VAR2->VAR25) * VAR2->VAR16[VAR23];
 }
 }
 return 0;
 }
 return -1;
}
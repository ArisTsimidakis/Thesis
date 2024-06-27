void FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
 const VAR7 *VAR8;
 const VAR7 *VAR9;
    EAS_I32 VAR10;
    EAS_I32 VAR11;
    EAS_I32 VAR12;
    EAS_I32 VAR13;
    EAS_I32 VAR14;
    EAS_I32 VAR15;
    EAS_I32 VAR16;
    EAS_I32 VAR17;
    VAR7 *VAR18;


     VAR10 = VAR4->VAR10;
     if (VAR10 <= 0) {
         FUN2("");


         return;
     }
     VAR6 = VAR4->VAR6;

 
    VAR12 = (VAR4->VAR19 - VAR4->VAR20) << (16 - VAR21);
 if (VAR12 < 0)
        VAR12++;
    VAR11 = VAR4->VAR20 << 16;

    VAR9 = VAR2->VAR22;
    VAR13 = VAR2->VAR23;
    VAR14 = VAR4->VAR24;

    VAR18 = VAR2->VAR18;
    VAR8 = VAR2->VAR8 + 1;

VAR25:
    VAR15 = (VAR5)(VAR9 - VAR8);
 if (VAR15 >= 0)
        VAR9 = VAR18 + VAR15;

    VAR15 = *VAR9;
    VAR16 = *(VAR9 + 1);

    VAR17 = VAR14 + VAR13;

    VAR16 = VAR16 - VAR15;
    VAR16 = VAR16 * VAR13;

    VAR16 = VAR15 + (VAR16 >> VAR26);

    VAR9 += (VAR17 >> VAR27);
    VAR13 = VAR17 & VAR28;

    VAR11 += VAR12;
    VAR17 = (VAR11 >> VAR21);

    VAR15 = *VAR6;
    VAR17 = VAR16 * VAR17;
    VAR17 = (VAR17 >> 9);
    VAR15 = VAR17 + VAR15;
 *VAR6++ = VAR15;

    VAR10--;
 if (VAR10 > 0)
 goto VAR25;

    VAR2->VAR22 = VAR9;
    VAR2->VAR23 = VAR13;
 
    VAR2->VAR11 = (VAR29)(VAR11 >> VAR21);
}
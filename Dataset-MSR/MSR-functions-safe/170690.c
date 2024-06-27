static EAS_RESULT FUN1 (VAR1 *VAR2, EAS_I32 VAR3, EAS_I32 VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    EAS_RESULT VAR9;
    EAS_U8 VAR10[VAR11];
    EAS_I32 VAR12;
    EAS_I32 VAR13;
    VAR14 *VAR15;

 
 if ((VAR9 = FUN2(VAR2->VAR16, VAR2->VAR17, VAR3)) != VAR18)
 return VAR9;

 
    VAR15 = VAR8;
 if (VAR6->VAR19 == 8)
 {
 if ((VAR9 = FUN3(VAR2->VAR16, VAR2->VAR17, VAR8, VAR4, &VAR12)) != VAR18)
 return VAR9;
 for (VAR13 = 0; VAR13 < VAR4; VAR13++)
 
 *VAR15++ ^= 0x80;
 }

 
 else
 {

 while (VAR4)
 {
            VAR14 *VAR20;

 
 if (VAR2->VAR21)
                VAR20 = (VAR14*) VAR10;
 else
                VAR20 = (VAR14*) VAR10 + 1;

 
            VAR12 = (VAR4 < VAR11 ? VAR4 : VAR11);
 if ((VAR9 = FUN3(VAR2->VAR16, VAR2->VAR17, VAR10, VAR12, &VAR12)) != VAR18)
 return VAR9;
            VAR4 -= VAR12;
 
            VAR12 = VAR12 >> 1;

 while (VAR12--)
 {
 *VAR15++ = *VAR20;
                VAR20 += 2;
 }
 }
 }

 
 if (VAR6->VAR22)
        VAR8[VAR6->VAR23 + VAR6->VAR22] = VAR8[VAR6->VAR23];

 return VAR18;
}
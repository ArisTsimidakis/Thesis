void FUN1(
 VAR1 *VAR2
)
{
 VAR3 *VAR4 = VAR2->VAR5;
 VAR3 *VAR6;
 int VAR7, VAR8;
    VAR9 *VAR10, *VAR11;
    VAR9 *VAR12, *VAR13;
    VAR9 *VAR14, *VAR15;
 int VAR16, VAR17;
 int32 VAR18;
#ifdef VAR19 
 int VAR20;
 int32 VAR21 = (VAR22) VAR2->VAR23 << 8;
 VAR24 *VAR25, *VAR26;
 VAR24 *VAR27;
 int VAR28 = VAR2->VAR29 << 1;
#endif

    VAR16 = VAR2->VAR16;
    VAR17  = VAR16 >> 1;
    VAR7 = VAR2->VAR30 << 4 ;
    VAR8 = VAR2->VAR31 << 4 ;
    VAR18 = (VAR22)VAR7 * VAR16 + VAR8;


 
     
     

    VAR11  = VAR4->VAR32 + VAR18;
















     
     VAR13 = VAR4->VAR33 + (VAR18 >> 2) + (VAR8 >> 2);
     
    VAR15 = VAR4->VAR34 + (VAR18 >> 2) + (VAR8 >> 2);

    VAR6 = VAR2->VAR35;

    VAR10  = VAR6->VAR32 + VAR18;
    VAR12 = VAR6->VAR33 + (VAR18 >> 2) + (VAR8 >> 2);
    VAR14 = VAR6->VAR34 + (VAR18 >> 2) + (VAR8 >> 2);


 
 FUN2(VAR10,  VAR11, VAR16);
 FUN3(VAR12, VAR13, VAR17);
 FUN3(VAR14, VAR15, VAR17);

 
#ifdef VAR19 
 if (VAR2->VAR36 != VAR37)
 {
        VAR20 = (VAR18 >> 6) - (VAR8 >> 6) + (VAR8 >> 3);
 
        VAR27 = VAR2->VAR38 + VAR20;
        VAR25 = VAR2->VAR39 + VAR20;
 *VAR25 = *VAR27;
 *(VAR25 + 1) = *(VAR27 + 1);
 *(VAR25 + VAR28) = *(VAR27 + VAR28);
 *(VAR25 + VAR28 + 1) = *(VAR27 + VAR28 + 1);

 
 
        VAR27 = VAR2->VAR38 + (VAR21 >> 6) +
 ((VAR20 + (VAR8 >> 3)) >> 2);
        VAR26 = VAR2->VAR39 + (VAR21 >> 6) +
 ((VAR20 + (VAR8 >> 3)) >> 2);
 *VAR26 = *VAR27;
        VAR26[VAR21>>8] = VAR27[VAR21>>8];
 }
#endif
 

 return;
}
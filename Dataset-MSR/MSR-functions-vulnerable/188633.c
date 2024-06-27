int FUN1(VAR1 *VAR2, VAR3 *VAR4,
 VAR5 *VAR6)
{
 VAR7 *VAR8 = (VAR7 *)VAR2;
 int VAR9 = ((VAR4->VAR10 - 1) / sizeof(VAR11) + 1) * sizeof(VAR11);
 VAR11 *VAR12 = (VAR11 *)VAR4->VAR13;
 int32_t VAR14 = *VAR12++;
 int32_t VAR15;
 char *VAR16;
 void *VAR17 = VAR4->VAR13 + VAR9;
 int VAR18;

    FUN2("", VAR19);

    VAR4->VAR20 = 0;

 switch (VAR14) {
 case VAR21:
 case VAR22:
 case VAR23:
 case VAR24:
 case VAR25:
 if (VAR4->VAR26 < sizeof(VAR27))
           VAR4->VAR20 = -VAR28;
        VAR4->VAR26 = sizeof(VAR27);
 break;

 case VAR29:
 if (VAR4->VAR26 < 2 * sizeof(VAR27))
            VAR4->VAR20 = -VAR28;
        VAR4->VAR26 = 2 * sizeof(VAR27);
 break;
 case VAR30:
 if (VAR4->VAR26 < 2 * sizeof(VAR11))
            VAR4->VAR20 = -VAR28;
        VAR4->VAR26 = 2 * sizeof(VAR11);
 break;

 case VAR31:
 if (VAR4->VAR26 < sizeof(VAR11))
            VAR4->VAR20 = -VAR28;
        VAR4->VAR26 = sizeof(VAR11);
 break;

 case VAR32:
 break;

 case VAR33:
 if (VAR4->VAR26 < (2 + VAR34) * sizeof(VAR35))
            VAR4->VAR20 = -VAR28;
        VAR4->VAR26 = (2 + VAR34) * sizeof(VAR35);
 break;

 default:
        VAR4->VAR20 = -VAR28;
 }

 *VAR6 = sizeof(VAR3) + VAR9 + VAR4->VAR26;

 if (VAR4->VAR20 != 0)
 return 0;

 switch (VAR14) {
 case VAR21:
	FUN2("", VAR19);
 *(VAR35 *)VAR17 = (VAR35)VAR34;
 break;

 case VAR29:
	FUN2("", VAR19);
 *(VAR27 *)VAR17 = -1500;
 *((VAR27 *)VAR17 + 1) = 1500;
 break;


     case VAR24:
 	FUN2("", VAR19);
         VAR15 = *VAR12;

        if (VAR15 >= VAR34) {


             VAR4->VAR20 = -VAR28;








             break;
         }
         *(VAR27 *)VAR17 = (VAR27)FUN3(VAR8, VAR15);
 break;


     case VAR31:
 	FUN2("", VAR19);
         VAR15 = *VAR12;

        if (VAR15 >= VAR34) {

           VAR4->VAR20 = -VAR28;












             break;
         }
         *(VAR11 *)VAR17 = FUN4(VAR8, VAR15);
 break;


     case VAR30:
 	FUN2("", VAR19);
         VAR15 = *VAR12;

        if (VAR15 >= VAR34) {


             VAR4->VAR20 = -VAR28;








            break;
         }
        FUN5(VAR8, VAR15, (VAR5 *)VAR17,
 ((VAR5 *)VAR17 + 1));
 break;

 case VAR25:
	FUN2("", VAR19);
        VAR15 = *VAR12;
 *(VAR35 *)VAR17 = (VAR35)FUN6(VAR8, VAR15);
 break;

 case VAR22:
	FUN2("", VAR19);
 *(VAR35 *)VAR17 = (VAR35)FUN7(VAR8);
 break;

 case VAR23:
	FUN2("", VAR19);
 *(VAR35 *)VAR17 = (VAR35)FUN8(VAR8);
 break;

 case VAR32:
	FUN2("", VAR19);
        VAR15 = *VAR12;
	FUN2("", VAR15);
 if (VAR15 >= FUN8(VAR8)) {
            VAR4->VAR20 = -VAR28;
 break;
 }
        VAR16 = (char *)VAR17;
        FUN9(VAR16, FUN10(VAR8, VAR15), VAR4->VAR26 - 1);
        VAR16[VAR4->VAR26 - 1] = 0;
        VAR4->VAR26 = strlen(VAR16) + 1;
 break;

 case VAR33: {
	FUN2("", VAR19);
 VAR27 *VAR36 = (VAR27 *)VAR17;
        VAR36[0] = (VAR27)FUN7(VAR8);
        VAR36[1] = (VAR27)VAR34;
 for (VAR18 = 0; VAR18 < VAR34; VAR18++) {
            VAR36[2 + VAR18] = (VAR27)FUN3(VAR8, VAR18);
 }
 } break;

 default:
        VAR4->VAR20 = -VAR28;
 break;
 }

 return 0;
}
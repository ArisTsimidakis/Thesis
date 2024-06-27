FUN1(struct VAR1 *VAR2, error_level VAR3, const char *VAR4, ...)
 
{
   VAR2->VAR5 |= 1U << VAR3;

 if (VAR3 > (VAR6)(VAR2->VAR7 & VAR8))
 {
 const char *VAR9;
      va_list VAR10;

 switch (VAR3)
 {
 case VAR11:    VAR9 = ""; break;
 case VAR12: VAR9 = ""; break;
 case VAR13:    VAR9 = ""; break;
 case VAR14:       VAR9 = ""; break;
 case VAR15:   VAR9 = ""; break;
 case VAR16:     VAR9 = ""; break;
 case VAR17:      VAR9 = ""; break;
 case VAR18:     VAR9 = ""; break;

 case VAR19: 
 case VAR20: case VAR21: case VAR22: case VAR23:
 default:             VAR9 = ""; break;
 }

      fprintf(VAR24, "",
         VAR2->VAR25 != NULL ? VAR2->VAR25 : "", VAR9, VAR2->VAR26);

 if (VAR2->VAR27 != 0)
 {

          int VAR28 = VAR2->VAR27;
 
          if (FUN2(VAR28))

            fprintf(VAR24, "", VAR28);


























































 
          else
             fprintf(VAR24, "", FUN3(VAR28));
 }

      fprintf(VAR24, "");

      FUN4(VAR10, VAR4);
      FUN5(VAR24, VAR4, VAR10);
      FUN6(VAR10);

      fputc('', VAR24);
 }
 

 
 if (VAR3 > VAR14 || (VAR3 > VAR22 && !(VAR2->VAR7 & VAR29)))
      FUN7(VAR2->VAR30, VAR3);
}
int FUN1(char *VAR1, void *VAR2)
 {
   struct VAR3 *VAR4 = VAR2;
   struct VAR5 *VAR6 = NULL;

  char VAR7[VAR8];


   char VAR9[VAR10] = "";
   char VAR11;
   anum_t VAR12, VAR13;
 
   if (!VAR4 || !VAR1)
     return 0;
 

  if (sscanf(VAR1, "" VAR14 "" VAR14 "", VAR7, &VAR13, &VAR12, &VAR11, VAR9) < 4)








     return 0;


 
   VAR6 = FUN2(VAR4, VAR7);
   VAR6->VAR15 = false;
  VAR6->VAR16 = VAR12;
  VAR6->VAR17 = VAR13;
  VAR6->VAR18 = (VAR11 == '') || (VAR11 == '');
  FUN3(&VAR6->VAR9, VAR9);
  if (VAR6->VAR19 || VAR6->VAR20)
    FUN4(VAR6);
  else if (VAR6->VAR17 && VAR6->VAR16 <= VAR6->VAR17)
    VAR6->VAR21 = VAR6->VAR17 - VAR6->VAR16 + 1;
  else
    VAR6->VAR21 = 0;
  return 0;
}
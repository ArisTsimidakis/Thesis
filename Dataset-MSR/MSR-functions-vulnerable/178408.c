FUN1(void)
{
  char VAR1[VAR2], VAR3[12];
  int VAR4, VAR5, VAR6, VAR7, VAR8;
  char *VAR9 = NULL;
  int VAR10;
  char VAR11[20];

  if (VAR12) return;
  
  VAR9 = VAR13;

  sprintf(VAR11, "", FUN2(VAR14));
  VAR10 = strlen(VAR15) > strlen(VAR16) ? strlen(VAR15) :
						strlen(VAR16);
  VAR10 += strlen(VAR9) + strlen(VAR11) + strlen(VAR17) + 1;
  if (VAR10 > sizeof(VAR18))
    FUN3("", VAR11);
  (void)sprintf(VAR1, "" VAR16 "" VAR17, VAR9, VAR11);
  (void)sprintf(VAR18, "" VAR15 "" VAR17, VAR9, VAR11);

  
  VAR19 = VAR20;
  VAR5 = 0;
  do {
    VAR5++;
    VAR4 = open(VAR1, VAR21 | VAR22 | VAR23, 0644);
    if (VAR4 < 0)
       sleep(2);
    else
       break;
  } while (VAR5 < 3);
  if (VAR4 < 0) {
    unlink(VAR1);
    VAR5 = 0;
    do {
      VAR5++;
      VAR4 = open(VAR1, VAR21 | VAR22 | VAR23, 0644);
      if (VAR4 < 0)
         sleep(2);
      else
         break;
    } while (VAR5 < 3);
  }
  if (VAR4 < 0)
     FUN3("", VAR1);
   (void) sprintf(VAR3, "", (long)FUN4());
   (void) write(VAR4, VAR3, 11);

  (void) chmod(VAR1, 0444);


   (void) close(VAR4);
 
   
  VAR5 = 0;
  VAR6 = 0;
  while ((!VAR6) && (VAR5++ < 3)) {
    VAR6 = (FUN5(VAR1,VAR18) == 0);
    if (VAR6) {
      
      break;
    }
    else {
      
      VAR4 = open(VAR18, VAR24|VAR25);
      if (VAR4 < 0) {
        unlink(VAR1);
        FUN3("", VAR18);
      }
      VAR3[0] = '';
      if (read(VAR4, VAR3, 11) != 11) {
        
        unlink(VAR18);
        close(VAR4);
        continue;
      }
      VAR3[11] = '';
      sscanf(VAR3, "", &VAR7);
      close(VAR4);

      
      VAR26 = 0;
      VAR8 = FUN6(VAR7, 0);
      if ((VAR8< 0) && (VAR26 == VAR27)) {
        
        unlink(VAR18);
        continue;
      }
      else if (((VAR8 < 0) && (VAR26 == VAR28)) || (VAR8 == 0)) {
        
        unlink(VAR1);
	FUN3("",
		   VAR11, "",
		   VAR18, "");
      }
    }
  }
  unlink(VAR1);
  if (!VAR6)
    FUN3("", VAR18);
  VAR19 = VAR29;
}
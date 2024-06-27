FUN1(VAR1 *VAR2)		
{
  VAR3	*VAR4;			
  VAR5	*VAR6;			
  const char	*VAR7;			
  char		*VAR8;			


 

  FUN2(VAR2->VAR9, FUN3(VAR2->VAR10, VAR11),
          sizeof(VAR2->VAR9));
  if ((VAR8 = strrchr(VAR2->VAR9, '')) != NULL && !strchr(VAR8, ''))
  {
    *VAR8++ = '';
    VAR2->VAR12 = FUN4(VAR8);
  }
  else
    VAR2->VAR12 = VAR2->VAR13;

 

  if (FUN5(FUN6(VAR2->VAR10)))
  {
   
 
     return (!FUN7(VAR2->VAR9, "") ||
 	    !FUN7(VAR2->VAR9, "") ||

#ifdef VAR14

	    !FUN7(VAR2->VAR9, "") ||

#endif 
             !strcmp(VAR2->VAR9, "") ||
 	    !strcmp(VAR2->VAR9, ""));
   }

#if FUN8(VAR15) || FUN8(VAR16)
 

  if ((VAR7 = strrchr(VAR2->VAR9, '')) != NULL && VAR7 > VAR2->VAR9 &&
      !VAR7[1])
  {
   

    for (VAR7 --; VAR7 > VAR2->VAR9 && *VAR7 != ''; VAR7 --);
  }

  if (VAR7 && (!FUN7(VAR7, "") ||
	      !FUN7(VAR7, "")))
    return (1);
#endif 

 

  if (FUN9(VAR2->VAR9[0] & 255) || VAR2->VAR9[0] == '')
  {
   

    VAR17 *VAR18;		


    if ((VAR18 = FUN10(VAR2->VAR9, VAR19, NULL)) != NULL)
    {
     

      FUN11(VAR18);
      return (1);
    }
  }

 

  for (VAR4 = (VAR3 *)FUN12(VAR20);
       VAR4;
       VAR4 = (VAR3 *)FUN13(VAR20))
  {
   

    if (!strcmp(VAR4->VAR21, ""))
      return (1);

    if (!FUN14(VAR2->VAR9, VAR4->VAR21, VAR4->VAR22))
    {
     

      VAR7 = VAR2->VAR9 + VAR4->VAR22;

      if (!*VAR7 || (*VAR7 == '' && !VAR7[1]))
        return (1);
    }
  }

#if FUN8(VAR15) || FUN8(VAR16)
  for (VAR4 = (VAR3 *)FUN12(VAR23);
       VAR4;
       VAR4 = (VAR3 *)FUN13(VAR23))
  {
   

    if (!strcmp(VAR4->VAR21, ""))
      return (1);

    if (!FUN14(VAR2->VAR9, VAR4->VAR21, VAR4->VAR22))
    {
     

      VAR7 = VAR2->VAR9 + VAR4->VAR22;

      if (!*VAR7 || (*VAR7 == '' && !VAR7[1]))
        return (1);
    }
  }
#endif 

 

  for (VAR6 = (VAR5 *)FUN12(VAR24);
       VAR6;
       VAR6 = (VAR5 *)FUN13(VAR24))
  {
    if (!FUN14(VAR2->VAR9, VAR6->VAR25, VAR6->VAR26))
    {
     

      VAR7 = VAR2->VAR9 + VAR6->VAR26;

      if (!*VAR7 || (*VAR7 == '' && !VAR7[1]))
        return (1);
    }
  }

  return (0);
}
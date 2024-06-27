int FUN1 (const char *VAR1,
                                     va_list VAR2)
{
  
   char VAR3[1024];
   int VAR4;
   int VAR5;


 
   VAR4 = sizeof (VAR3);

  VAR5 = _vsnprintf (VAR3, VAR4 - 1, VAR1, VAR2);






 
   while (VAR5 == -1) 
     {

      VAR6 = malloc (VAR4);

      if (VAR6 == NULL)
        return -1;

       if (VAR6 == NULL)
         return -1;
 

      VAR5 = _vsnprintf (VAR6, VAR4 - 1, VAR1, VAR2);






       free (VAR6);
     }
 * Returns the VAR7-16 form of a VAR7-8 VAR8. The result should VAR9
 * freed VAR10 FUN2() when no longer VAR11.
 *
 * @param str the VAR7-8 VAR8
 * @param error return location for error VAR12
wchar_t *
FUN3 (const char *VAR13,
                         VAR14  *VAR15)
{
  DBusString VAR16;
  int VAR17;
  wchar_t *VAR18;

  FUN4 (&VAR16, VAR13);

  if (!FUN5 (&VAR16, 0, FUN6 (&VAR16)))
    {
      FUN7 (VAR15, VAR19, "");
      return NULL;
    }

  VAR17 = FUN8 (VAR20, 0, VAR13, -1, NULL, 0);

  if (VAR17 == 0)
    {
      FUN9 (VAR15, FUN10 ());
      return NULL;
    }

  VAR18 = FUN11 (wchar_t, VAR17);

  if (!VAR18)
    {
      FUN12 (VAR15);
      return NULL;
    }

  if (FUN8 (VAR20, 0, VAR13, -1, VAR18, VAR17) != VAR17)
    {
      FUN2 (VAR18);
      FUN7 (VAR15, VAR19, "");
      return NULL;
    }

  return VAR18;
}


char *
FUN13 (const wchar_t *VAR13,
                         VAR14     *VAR15)
{
  int VAR17;
  char *VAR18;

  VAR17 = FUN14 (VAR20, 0, VAR13, -1, NULL, 0, NULL, NULL);

  if (VAR17 == 0)
    {
      FUN9 (VAR15, FUN10 ());
      return NULL;
    }

  VAR18 = FUN15 (VAR17);

  if (!VAR18)
    {
      FUN12 (VAR15);
      return NULL;
    }

  if (FUN14 (VAR20, 0, VAR13, -1, VAR18, VAR17, NULL, NULL) != VAR17)
    {
      FUN2 (VAR18);
      FUN7 (VAR15, VAR19, "");
      return NULL;
    }

  return VAR18;
}








VAR21
FUN16 (const wchar_t *VAR22,
                          void      	 **VAR23,
                          VAR14 	  *VAR15)
{
  dbus_bool_t VAR18 = VAR24;
  DWORD VAR25, VAR26;
  SID_NAME_USE VAR27;
  wchar_t *VAR28;

  *VAR23 = NULL;

  VAR25 = 0;
  VAR26 = 0;
  if (!FUN17 (NULL, VAR22, NULL, &VAR25,
                           NULL, &VAR26, &VAR27) &&
      FUN10 () != VAR29)
    {
      FUN9 (VAR15, FUN10 ());
      return VAR24;
    }

  *VAR23 = FUN15 (VAR25);
  if (!*VAR23)
    {
      FUN12 (VAR15);
      return VAR24;
    }

  VAR28 = FUN11 (wchar_t, VAR26);
  if (!VAR28)
    {
      FUN12 (VAR15);
      goto VAR30;
    }

  if (!FUN17 (NULL, VAR22, (VAR31) *VAR23, &VAR25,
                           VAR28, &VAR26, &VAR27))
    {
      FUN9 (VAR15, FUN10 ());
      goto VAR32;
    }

  if (!FUN18 ((VAR31) *VAR23))
    {
      FUN7 (VAR15, VAR19, "");
      goto VAR32;
    }

  VAR18 = VAR33;

VAR32:
  FUN2 (VAR28);
VAR30:
  if (!VAR18)
    {
      FUN2 (*VAR23);
      *VAR23 = NULL;
    }

  return VAR18;
}
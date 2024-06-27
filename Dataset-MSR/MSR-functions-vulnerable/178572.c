FUN1 (char const *VAR1)
{
    file_offset VAR2 = 0;
    file_offset VAR3;
    struct stat VAR4;

    if (!VAR1 || !*VAR1 || FUN2 (VAR1, ""))
      VAR5 = stdin;
    else
      {
	VAR5 = fopen (VAR1, VAR6 ? "" : "");
	if (!VAR5)
	  FUN3 ("", FUN4 (VAR1));
      }
#if VAR7
    if (VAR6)
      {
	if (FUN5 (FUN6 (VAR5)))
	  FUN7 ("");
	FUN8 (FUN6 (VAR5), VAR8);
      }
#endif
    if (FUN9 (FUN6 (VAR5), &VAR4) != 0)
      FUN3 ("");
    if (FUN10 (VAR4.VAR9) && (VAR3 = FUN11 (VAR5)) != -1)
      VAR2 = VAR3;
    else
      {
	size_t VAR10;
	int VAR11 = FUN12 (&VAR12, '', NULL, VAR13 | VAR8, 0);
	VAR14 *VAR15 = VAR5;
	VAR16 = true;
	VAR5 = FUN13 (VAR11, "");
	if (! VAR5)
	  FUN3 ("", FUN4 (VAR12));
	for (VAR4.VAR17 = 0;
	     (VAR10 = fread (VAR18, 1, VAR19, VAR15)) != 0;
	     VAR4.VAR17 += VAR10)
	  if (fwrite (VAR18, 1, VAR10, VAR5) != VAR10)
	    FUN14 ();
	if (FUN15 (VAR15) || fclose (VAR15) != 0)
	  FUN16 ();
	if (FUN17 (VAR5) != 0
	    || FUN18 (VAR5, (VAR20) 0, VAR21) != 0)
	  FUN14 ();
      }
    VAR22 = VAR4.VAR17;
     if (VAR22 != (VAR20) VAR22)
       FUN7 ("");
     FUN19 (VAR2, 1);

    FUN20();
 }
FUN1 (char const *VAR1, char const *VAR2,
	      bool *VAR3, VAR4 *VAR5)
{
    static char const VAR6[] = VAR7;

    file_offset VAR8;
    size_t VAR9;
    VAR4 *VAR10 = 0;
    char const *VAR11;
    int VAR12;
    pid_t VAR13;

    if (! VAR14 && ! VAR15)
      {
	

	VAR12 = FUN2 (&VAR11, '', NULL, VAR16 | VAR17, 0);
	if (VAR12 == -1)
	  FUN3 ("", FUN4 (VAR11));
	VAR10 = FUN5 (VAR12, "");
	if (! VAR10)
	  FUN3 ("", FUN4 (VAR11));
      }

    for (;;) {
	char VAR18;
	VAR8 = FUN6 (VAR19);
	VAR9 = FUN7 ();
	if (! VAR9) {
	    FUN8(VAR8,VAR20);
	    break;
	}
	VAR18 = FUN9 (VAR21);
	if (VAR18) {
	    if (VAR10)
		if (! fwrite (VAR21, sizeof *VAR21, VAR9, VAR10))
		    FUN10 ();
	    if (VAR18 != '' && VAR18 != '') {
	        VAR22 = true;
		while ((VAR9 = FUN7 ()) != 0) {
		    if (VAR10)
			if (! fwrite (VAR21, sizeof *VAR21, VAR9, VAR10))
			    FUN10 ();
		    if (VAR9 == 2  &&  FUN11 (VAR21, ""))
			break;
		}
		VAR22 = false;
	    }
	}
	else {
	    FUN8(VAR8,VAR20);
	    break;
	}
    }
    if (!VAR10)
      return;
    if (fwrite ("", sizeof (char), (VAR23) 4, VAR10) == 0
	|| FUN12 (VAR10) != 0)
      FUN10 ();

    if (FUN13 (VAR12, 0, VAR24) == -1)
      FUN3 ("", FUN4 (VAR11));

    if (! VAR14 && ! VAR15) {
	int VAR25 = *VAR3 ? 0 : VAR26;
	*VAR3 = true;
	if (VAR27 != VAR28)
	  {
 	    *VAR3 = true;
 	    FUN14 (VAR1, VAR2, 0, VAR25, VAR29.VAR30, true);
 	  }

	sprintf (VAR21, "", VAR6,

		 VAR31 == VAR32 ? "" : "",

		 VAR2);
 	FUN12 (VAR33);
 
 	VAR13 = FUN15();
	FUN12 (VAR33);

 	else if (VAR13 == 0)
 	  {
 	    FUN16 (VAR12, 0);

	    FUN17 ("", "", "", VAR21, (char *) 0);




 	    FUN18 (2);
 	  }
 	else
	  }
	else
	  {
	    int VAR34;
	    if (FUN19 (VAR13, &VAR34, 0) == -1
	        || ! FUN20 (VAR34)
		|| FUN21 (VAR34) != 0)
	      FUN22 ("", VAR6);
	  }
    }
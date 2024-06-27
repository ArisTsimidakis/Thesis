main (int argc, char *argv[])
{
  struct gengetopt_args_info VAR1;
  char *VAR2 = NULL;
  size_t VAR3 = 0;
  char *VAR4, *VAR5;
  VAR6 *VAR7;
  unsigned VAR8 = 0;
  int VAR9;

  FUN1 (VAR10, "");
  FUN2 (argv[0]);
  FUN3 (VAR11, VAR12);
  FUN4 (VAR11);

  if (FUN5 (argc, argv, &VAR1) != 0)
    return VAR13;

  if (VAR1.VAR14)
    {
      FUN6 (VAR15, "", VAR16, VAR17,
		   "", (char *) NULL);
      return VAR18;
    }

  if (VAR1.VAR19)
    FUN7 (VAR18);

  
  if (VAR1.VAR20)
    VAR1.VAR21 = 1;

  if (!VAR1.VAR22 &&
      !VAR1.VAR23 && !VAR1.VAR24 &&
      !VAR1.VAR25 && !VAR1.VAR26 &&
      !VAR1.VAR21)
    VAR1.VAR25 = 1;

  if ((VAR1.VAR22 ? 1 : 0) +
      (VAR1.VAR23 ? 1 : 0) +
      (VAR1.VAR24 ? 1 : 0) +
      (VAR1.VAR25 ? 1 : 0) +
      (VAR1.VAR26 ? 1 : 0) +
      (VAR1.VAR21 ? 1 : 0) != 1)
    {
      FUN8 (0, 0, FUN9(""));
      FUN7 (VAR13);
    }

  if (!VAR1.VAR27
      && VAR1.VAR28 == 0
      && FUN10 (FUN11 (stdin)))
    fprintf (VAR29, "" VAR30, VAR11, VAR17);

  if (VAR1.VAR31)
    fprintf (VAR29, FUN9(""), FUN12 ());

  if (!VAR1.VAR27
      && VAR1.VAR28 == 0
      && FUN10 (FUN11 (stdin)))
    fprintf (VAR29, FUN9(""
		       ""));

  do
    {
      if (VAR8 < VAR1.VAR28)
	VAR2 = strdup (VAR1.VAR32[VAR8++]);
      else if (FUN13 (&VAR2, &VAR3, stdin) == -1)
	{
	  if (FUN14 (stdin))
	    break;

 	  FUN8 (VAR13, VAR33, FUN9(""));
 	}
 

      if (VAR2[strlen (VAR2) - 1] == '')

	VAR2[strlen (VAR2) - 1] = '';






 
       if (VAR1.VAR22)
 	{
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  VAR7 = FUN15 (VAR4, -1, NULL);
	  if (!VAR7)
	    {
	      free (VAR4);
	      FUN8 (VAR13, 0,
		     FUN9(""));
	    }

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }
	  free (VAR7);

	  VAR9 = FUN16 (VAR4, &VAR5,
				   VAR1.VAR35 ?
				   VAR1.VAR36 : "", 0);
	  free (VAR4);
	  if (VAR9 != VAR37)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN17 (VAR9));

	  VAR7 = FUN15 (VAR5, -1, NULL);
	  if (!VAR7)
	    {
	      free (VAR5);
	      FUN8 (VAR13, 0,
		     FUN9(""));
	    }

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }
	  free (VAR7);

	  VAR4 = FUN18 (VAR5);
	  free (VAR5);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  fprintf (VAR15, "", VAR4);

	  free (VAR4);
	}

      if (VAR1.VAR23)
	{
	  char VAR38[VAR39];
	  size_t VAR40, VAR41;

	  VAR4 = FUN19 (VAR2);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  VAR7 = FUN15 (VAR4, -1, &VAR40);
	  free (VAR4);
	  if (!VAR7)
	    FUN8 (VAR13, 0,
		   FUN9(""));

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR34 < VAR40; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }

	  VAR41 = VAR39 - 1;
	  VAR9 = FUN20 (VAR40, VAR7, NULL, &VAR41, VAR38);
	  free (VAR7);
	  if (VAR9 != VAR42)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN21 (VAR9));

	  VAR38[VAR41] = '';

	  VAR4 = FUN18 (VAR38);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  fprintf (VAR15, "", VAR4);

	  free (VAR4);
	}

      if (VAR1.VAR24)
	{
	  size_t VAR40;

	  VAR40 = VAR39;
	  VAR7 = (VAR6 *) malloc (VAR40 * sizeof (VAR7[0]));
	  if (!VAR7)
	    FUN8 (VAR13, VAR43, FUN22(""));

	  VAR9 = FUN23 (strlen (VAR2), VAR2, &VAR40, VAR7, NULL);
	  if (VAR9 != VAR42)
	    {
	      free (VAR7);
	      FUN8 (VAR13, 0, FUN9(""),
		     FUN21 (VAR9));
	    }

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR34 < VAR40; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }

	  VAR7[VAR40] = 0;
	  VAR5 = FUN24 (VAR7, -1, NULL, NULL);
	  free (VAR7);
	  if (!VAR5)
	    FUN8 (VAR13, 0,
		   FUN9(""));

	  VAR4 = FUN18 (VAR5);
	  free (VAR5);
	  if (!VAR5)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  fprintf (VAR15, "", VAR4);

	  free (VAR4);
	}

      if (VAR1.VAR25)
	{
	  VAR4 = FUN19 (VAR2);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  VAR7 = FUN15 (VAR4, -1, NULL);
	  free (VAR4);
	  if (!VAR7)
	    FUN8 (VAR13, 0,
		   FUN9(""));

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }

	  VAR9 = FUN25 (VAR7, &VAR4,
				 (VAR1.VAR44 ?
				  VAR45 : 0) |
				 (VAR1.VAR46 ?
				  VAR47 : 0));
	  free (VAR7);
	  if (VAR9 != VAR48)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN26 (VAR9));

#ifdef VAR49
	  if (VAR1.VAR50 && !VAR1.VAR51)
	    {
	      size_t VAR52;

	      VAR9 = FUN27 (VAR4, &VAR7,
					 (VAR1.VAR44 ?
					  VAR45 : 0) |
					 (VAR1.VAR46 ?
					  VAR47 : 0));
	      if (VAR9 != VAR48)
		FUN8 (VAR13, 0, FUN9(""),
		       FUN26 (VAR9));

	      if (VAR1.VAR31)
		{
		  size_t VAR34;
		  for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		    fprintf (VAR29, "",
			     (unsigned long) VAR34, VAR7[VAR34]);
		}

	      VAR9 = FUN28 (VAR7, &VAR52, NULL);
	      free (VAR7);
	      if (VAR9 == VAR53)
		FUN8 (VAR13, 0, FUN9(""),
		       (unsigned long) VAR52, FUN29 (VAR9));
	      if (VAR9 != VAR54)
		FUN8 (VAR13, 0, FUN9(""),
		       FUN29 (VAR9));
	    }
#endif

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR4[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR4[VAR34]);
	    }

	  fprintf (VAR15, "", VAR4);

	  free (VAR4);
	}

      if (VAR1.VAR26)
	{
	  VAR4 = FUN19 (VAR2);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  VAR7 = FUN15 (VAR4, -1, NULL);
	  if (!VAR7)
	    {
	      free (VAR4);
	      FUN8 (VAR13, 0,
		     FUN9(""));
	    }

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }
	  free (VAR7);

	  VAR9 = FUN27 (VAR4, &VAR7,
				     (VAR1.VAR44 ?
				      VAR45 : 0) |
				     (VAR1.VAR46 ?
				      VAR47 : 0));
	  free (VAR4);
	  if (VAR9 != VAR48)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN26 (VAR9));

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;
	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);
	    }

#ifdef VAR49
	  if (VAR1.VAR50)
	    {
	      size_t VAR52;

	      VAR9 = FUN28 (VAR7, &VAR52, NULL);
	      if (VAR9 == VAR53)
		{
		  free (VAR7);
		  FUN8 (VAR13, 0,
			 FUN9(""),
			 (unsigned long) VAR52, FUN29 (VAR9));
		}
	      if (VAR9 != VAR54)
		{
		  free (VAR7);
		  FUN8 (VAR13, 0, FUN9(""),
			 FUN29 (VAR9));
		}
	    }
#endif

	  VAR5 = FUN24 (VAR7, -1, NULL, NULL);
	  free (VAR7);
	  if (!VAR5)
	    FUN8 (VAR13, 0,
		   FUN9(""));

	  VAR4 = FUN18 (VAR5);
	  free (VAR5);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  fprintf (VAR15, "", VAR4);

	  free (VAR4);
	}

      if (VAR1.VAR21)
	{
	  VAR4 = FUN19 (VAR2);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;

	      VAR7 = FUN15 (VAR4, -1, NULL);
	      if (!VAR7)
		{
		  free (VAR4);
		  FUN8 (VAR13, 0,
			 FUN9(""));
		}

	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);

	      free (VAR7);
	    }

	  VAR5 = FUN30 (VAR4, -1);
	  free (VAR4);
	  if (!VAR5)
	    FUN8 (VAR13, 0, FUN9(""));

	  if (VAR1.VAR31)
	    {
	      size_t VAR34;

	      VAR7 = FUN15 (VAR5, -1, NULL);
	      if (!VAR7)
		{
		  free (VAR5);
		  FUN8 (VAR13, 0,
			 FUN9(""));
		}

	      for (VAR34 = 0; VAR7[VAR34]; VAR34++)
		fprintf (VAR29, "",
			 (unsigned long) VAR34, VAR7[VAR34]);

	      free (VAR7);
	    }

	  VAR4 = FUN18 (VAR5);
	  free (VAR5);
	  if (!VAR4)
	    FUN8 (VAR13, 0, FUN9(""),
		   FUN12 ());

	  fprintf (VAR15, "", VAR4);

	  free (VAR4);
	}

      FUN31 (VAR15);
    }
  while (!FUN14 (stdin) && !FUN32 (stdin) && (VAR1.VAR28 == 0 ||
					      VAR8 < VAR1.VAR28));

  free (VAR2);

  return VAR18;
}
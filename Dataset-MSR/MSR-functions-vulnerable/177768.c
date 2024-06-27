FUN1 (struct VAR1 *VAR2, size_t VAR3)
{
  union VAR4 *VAR5;
  off_t VAR6 = VAR2->VAR7->VAR8[VAR3].VAR9;

  if (!FUN2 (VAR2, VAR2->VAR7->VAR8[VAR3].VAR10))
    return false;

  while (VAR6 > 0)
    {
      size_t VAR11 = (VAR6 > VAR12) ? VAR12 : VAR6;
      size_t VAR13;

      VAR5 = FUN3 ();
      VAR13 = FUN4 (VAR2->VAR14, VAR5->VAR15, VAR11);
      if (VAR13 == VAR16)
	{
          FUN5 (VAR2->VAR7->VAR17,
	                     (VAR2->VAR7->VAR8[VAR3].VAR10
			      + VAR2->VAR7->VAR8[VAR3].VAR9
			      - VAR6),
 			     VAR11);
 	  return false;
 	}
















































 
       memset (VAR5->VAR15 + VAR13, 0, VAR12 - VAR13);
       VAR6 -= VAR13;
    {
      size_t VAR18;
      size_t VAR19 = (VAR20 > VAR12) ? VAR12 : VAR20;
      union VAR4 *VAR5 = FUN3 ();
      if (!VAR5)
	{
	  FUN6 ((0, 0, FUN7("")));
	  return false;
	}
      FUN8 (VAR5);
      VAR18 = FUN9 (VAR2->VAR14, VAR5->VAR15, VAR19);
      VAR20 -= VAR18;
      VAR2->VAR21 += VAR18;
      FUN10 (VAR2->VAR7->VAR22 - VAR2->VAR21);
      VAR2->VAR10 += VAR18;
      if (VAR18 != VAR19)
	{
	  FUN11 (VAR2->VAR7->VAR17,
			       VAR18, VAR19);
	  return false;
	}
    }
  return true;
}




enum VAR23
FUN12 (int VAR14, struct VAR24 *VAR25)
{
 	  return false;
 	}
       FUN8 (VAR5);


       VAR18 = FUN9 (VAR2->VAR14, VAR5->VAR15, VAR19);
       VAR20 -= VAR18;

      VAR2->VAR21 += VAR18;
       FUN10 (VAR2->VAR7->VAR22 - VAR2->VAR21);
       VAR2->VAR10 += VAR18;
       if (VAR18 != VAR19)

  VAR26 = FUN13 (&VAR2);
  if (VAR26 && VAR2.VAR27->VAR28)
    {
      FUN14 (&VAR2);

      if (VAR14 >= 0)
	{
	  size_t VAR3;

	  FUN15 (VAR2.VAR7->VAR29,
		          VAR2.VAR7->VAR30.VAR31,
		          VAR2.VAR7->VAR22 - VAR2.VAR21);
	  for (VAR3 = 0; VAR26 && VAR3 < VAR2.VAR7->VAR32; VAR3++)
	    VAR26 = FUN16 (&VAR2, VAR3);
	}
    }

  FUN17 (VAR2.VAR7->VAR22 - VAR2.VAR21);
  return (FUN18 (&VAR2) && VAR26) ? VAR33 : VAR34;
}
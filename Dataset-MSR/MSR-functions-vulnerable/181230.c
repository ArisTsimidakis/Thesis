FUN1 (grub_disk_t VAR1, grub_disk_addr_t VAR2,
		grub_off_t VAR3, grub_size_t VAR4, void *VAR5)
{
  char *VAR6;
  unsigned VAR7;

  
  if (FUN2 (VAR1, &VAR2, &VAR3, VAR4) != VAR8)
    {
      FUN3 ();
      FUN4 ("", "",
		    (unsigned long long) VAR2, VAR9);
      FUN5 ();
      return VAR10;
    }

  VAR7 = VAR3;

  
  VAR6 = FUN6 (VAR11 << VAR12);
  if (! VAR6)
    return VAR10;

  
  while (VAR4)
    {
      char *VAR13;
      grub_disk_addr_t VAR14;
      grub_size_t VAR15;
      grub_size_t VAR16;

      
      VAR14 = VAR2 & ~(VAR17 - 1);
      VAR16 = (VAR2 - VAR14) << VAR18;
      VAR15 = ((VAR11 << VAR12)
	     - VAR16 - VAR7);
      if (VAR15 > VAR4)
	VAR15 = VAR4;

      
      VAR13 = FUN7 (VAR1->VAR19->VAR20, VAR1->VAR20, VAR14);
       if (VAR13)
 	{
 	  

	  if (VAR5)












 	    FUN8 (VAR5, VAR13 + VAR16 + VAR7, VAR15);


 	  FUN9 (VAR1->VAR19->VAR20, VAR1->VAR20, VAR14);
 	}
       else
	{
	  
	  if (VAR14 + VAR17 > VAR1->VAR21
	      || (VAR1->VAR19->read) (VAR1, VAR14,
				    VAR17, VAR6)
	      != VAR8)
	    {
	      
	      unsigned VAR22;
	      char *VAR23;

	      VAR10 = VAR8;

	      VAR22 = ((VAR4 + VAR7 + VAR11 - 1)
		     >> VAR18);

	      VAR23 = FUN10 (VAR6, VAR22 << VAR18);
	      if (!VAR23)
		goto VAR24;

	      VAR6 = VAR23;

	      if ((VAR1->VAR19->read) (VAR1, VAR2, VAR22, VAR6))
		{
		  FUN3 ();
		  FUN4 ("", "", VAR1->VAR25);
		  FUN5 ();
		  goto VAR24;
		}

	      if (VAR5)
		FUN8 (VAR5, VAR6 + VAR7, VAR4);

	      
	      if (VAR1->VAR26)
		while (VAR4)
		  {
		    grub_size_t VAR27;

		    VAR27 = VAR4;
		    if (VAR7 + VAR27 > VAR11)
		      VAR27 = VAR11 - VAR7;
		    (VAR1->VAR26) (VAR2, VAR7,
				       VAR27, VAR1->VAR28);
		    if (VAR10 != VAR8)
		      goto VAR24;

		    VAR2++;
		    VAR4 -= VAR27;
		    VAR7 = 0;
		  }

	      
	      goto VAR24;
	    }

	  
	  if (VAR5)
	    FUN8 (VAR5, VAR6 + VAR16 + VAR7, VAR15);
	  FUN11 (VAR1->VAR19->VAR20, VAR1->VAR20,
				 VAR14, VAR6);
	}

      
      if (VAR1->VAR26)
	{
	  grub_disk_addr_t VAR29 = VAR2;
	  grub_size_t VAR30 = VAR15;

	  while (VAR30)
	    {
	      (VAR1->VAR26) (VAR29, VAR7,
				 ((VAR30 > VAR11)
				  ? VAR11
				  : VAR30), VAR1->VAR28);

	      if (VAR30 < VAR11 - VAR7)
		break;

	      VAR29++;
	      VAR30 -= VAR11 - VAR7;
	      VAR7 = 0;
	    }
	}

      VAR2 = VAR14 + VAR17;
      if (VAR5)
	VAR5 = (char *) VAR5 + VAR15;
      VAR4 -= VAR15;
      VAR7 = 0;
    }

 VAR24:

  FUN12 (VAR6);

  return VAR10;
}
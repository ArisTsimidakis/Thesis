FUN1 (VAR1  *VAR2,
					 const char         *VAR3,
					 const char         *VAR4,
					 const char         *VAR5)
{
  VAR6 *VAR7;
	  
  if (VAR4[0] == '')
    {
      VAR6 *VAR8;
      VAR6 *VAR9;

      

      VAR9 = NULL;

      for (VAR8 = VAR2->VAR10; VAR8 ; VAR8 = VAR8->VAR11)
	{
	  VAR12 *VAR13 = VAR8->VAR14;
	  VAR15 *VAR16 = FUN2(VAR13);

	  if (!strcmp (VAR16->VAR3, VAR3))
	    {
	      VAR9 = FUN3 (VAR9, VAR8);
	      
	      FUN4 (VAR2, VAR5, VAR3);
	      VAR16->VAR17 = VAR18;
	    }
	}

      for (VAR8 = VAR9; VAR8; VAR8 = VAR8->VAR11)
	VAR2->VAR10 = FUN5 (VAR2->VAR10, VAR8->VAR14);
      FUN6 (VAR9);
    }
  else
    {
      VAR19 *VAR20;
      VAR6 *VAR21;

       

      VAR7 = FUN7 (VAR2->VAR22, VAR4);

      VAR20 = NULL;
      if (VAR7 != NULL)
        {
	  VAR21 = FUN8 (VAR7, VAR3, VAR23);

	  if (VAR21 != NULL)
	    {
	      VAR20 = VAR21->VAR14;
	  
	      VAR7 = FUN5 (VAR7, VAR21);

              if (VAR7 == NULL)
                {
                  FUN9 (VAR2->VAR22, VAR4);
                }
              else
                {
                  FUN10 (VAR2->VAR22,
                                       FUN11 (VAR4), VAR7);
                }
            }
        }

      if (VAR5[0] == '')
	{
	  DBusGProxyUnassociateData VAR14;
	  VAR6 *VAR8;

	  VAR14.VAR3 = VAR3;
	  VAR14.VAR24 = NULL;

	  
	  FUN12 (VAR2->VAR25,
				VAR26, &VAR14);

	  FUN13 (VAR2);

          
	  for (VAR8 = VAR14.VAR24; VAR8; VAR8 = VAR8->VAR11)
            if (VAR8->VAR14 != NULL)
              {
                FUN14 (FUN15 (VAR8->VAR14),
                    &(VAR8->VAR14));
                FUN16 (VAR8->VAR14);
              }
	  FUN6 (VAR14.VAR24);

	  FUN17 (VAR2);

	  if (VAR20)
	    {
	      FUN18 (VAR20->VAR3);
	      FUN18 (VAR20);
	    }
	}
      else if (VAR20)
	{
	  FUN19 (VAR2, VAR5, VAR20);
	}
    }
}
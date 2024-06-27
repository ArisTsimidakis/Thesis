FUN1 (gnutls_session_t VAR1,
				 const VAR2 * VAR3, size_t VAR4)
{
  int VAR5;
  const unsigned char *VAR6;
  uint16_t VAR7, VAR8;
  ssize_t VAR9 = VAR4;
  int VAR10 = 0;

  if (VAR1->VAR11.VAR12 == VAR13)
    {
      FUN2 (VAR9, 2, 0);
      VAR7 = FUN3 (VAR3);

      if (VAR7 != VAR9)
	{
	  
	  FUN4 ();
	  return 0;
	}

      VAR6 = VAR3 + 2;

      
      while (VAR9 > 0)
	{
	  FUN2 (VAR9, 1, 0);
	  VAR6++;

	  FUN5 (VAR9, 2);
          VAR7 = FUN3 (VAR6);
          VAR6 += 2;
 

         FUN2 (VAR9, VAR7, 0);

         VAR10++;




















 

         VAR6 += VAR7;




















        }
 
       VAR1->VAR11.VAR14.VAR15 =

       if (VAR10 == 0)
        return 0;               
 

      

      if (VAR10 > VAR16)

       VAR10 = VAR16;
 
       VAR6 = VAR3 + 2;
       for (VAR5 = 0; VAR5 < VAR10; VAR5++)
			  VAR10[VAR5].VAR17, VAR6, VAR7);
		  VAR1->VAR11.VAR14.
		    VAR10[VAR5].VAR18 = VAR7;
		  VAR1->VAR11.VAR14.
		    VAR10[VAR5].VAR8 = VAR19;
		  break;
		}
	    }
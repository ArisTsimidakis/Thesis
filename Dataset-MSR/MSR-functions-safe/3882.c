FUN1 (asn1_node VAR1)
{
  asn1_node VAR2;

  if ((VAR1 == NULL) || (FUN2 (VAR1->VAR3) != VAR4))
    return VAR5;

  VAR2 = VAR1;
  while (VAR2)
    {
      if ((FUN2 (VAR2->VAR3) == VAR6) &&
	  !(VAR2->VAR3 & VAR7) && !(VAR2->VAR3 & VAR8))
	{
	  if (VAR1->VAR3 & VAR7)
	    VAR2->VAR3 |= VAR7;
	  else
	    VAR2->VAR3 |= VAR8;
	}

      if (VAR2->VAR9)
	{
	  VAR2 = VAR2->VAR9;
	}
      else if (VAR2->VAR10)
	VAR2 = VAR2->VAR10;
      else
	{
	  while (1)
	    {
	      VAR2 = FUN3 (VAR2);
	      if (VAR2 == VAR1)
		{
		  VAR2 = NULL;
		  break;
		}
	      if (VAR2->VAR10)
		{
		  VAR2 = VAR2->VAR10;
		  break;
		}
	    }
	}
    }

  return VAR11;
}
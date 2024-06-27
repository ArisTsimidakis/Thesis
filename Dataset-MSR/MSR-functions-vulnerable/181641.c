FUN1(VAR1* VAR2, uint16 VAR3)
{
	VAR4* VAR5=(VAR4*)VAR2->VAR6;
	uint32 VAR7;
	if (VAR5->VAR8==0)
		FUN2(VAR2);
	if (VAR5->VAR9==0)
	{
		if (FUN3(VAR2)==0)
			return(0);
	}
	if (VAR5->VAR10[VAR3].VAR11==0)
	{
		if (FUN4(VAR2,VAR3)==0)
			return(0);
	}
	if FUN5(VAR2)
		VAR7=VAR2->VAR12;
	else
		VAR7=VAR2->VAR13;
	if ((VAR5->VAR14!=0) && ((VAR5->VAR15!=VAR3) || (VAR5->VAR16>VAR7)))
	{
		if (VAR5->VAR17!=0)
			FUN6(VAR2);
		VAR5->VAR14=0;
	}
	if (VAR5->VAR14==0)
	{
		VAR5->VAR18=(VAR19)VAR3;
		VAR5->VAR15=VAR3;
		VAR5->VAR16=VAR3*VAR2->VAR20.VAR21;
		if ((VAR5->VAR22==0) ||
		    (VAR5->VAR23-VAR5->VAR24!=VAR5->VAR10[VAR3].VAR23))
		{
			VAR5->VAR25=VAR5->VAR10[VAR3].VAR25;
			VAR5->VAR26=VAR5->VAR10[VAR3].VAR26;
			VAR5->VAR23=VAR5->VAR10[VAR3].VAR23;
			VAR5->VAR22=0;
			VAR5->VAR27=VAR5->VAR10[VAR3].VAR27;
			VAR5->VAR24=0;
			VAR5->VAR28=0;
		}
		if (FUN7(VAR2)==0)
			return(0);
	}
	while (VAR5->VAR16<VAR7)          
	{
		if (VAR5->VAR29==0)
		{
			if (FUN8(VAR2)==0)
				return(0);
		}
		else
		{
			if (FUN9(VAR2)==0)
				return(0);
 		}
 		VAR5->VAR16++;
 	}


 	return(1);
 }
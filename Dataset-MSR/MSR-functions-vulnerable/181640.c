FUN1(VAR1* VAR2, VAR3* VAR4, tmsize_t VAR5, uint16 VAR6)
 {


 	VAR7* VAR8=(VAR7*)VAR2->VAR9;
 	(void)VAR6;










 	if (VAR8->VAR10==0)
 	{
 		if (FUN2(VAR2,VAR4,VAR5)==0)
			return(0);
	}
	else
	{
		if (FUN3(VAR2,VAR4,VAR5)==0)
			return(0);
	}
	return(1);
}
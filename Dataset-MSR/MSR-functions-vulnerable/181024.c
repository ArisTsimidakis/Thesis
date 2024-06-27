FUN1(VAR1 *VAR2, register const VAR3 *VAR4, register const VAR3 *VAR5)
{
	register const struct VAR6 *VAR7;
	register const struct VAR8 *VAR9;

 	VAR7 = (const struct VAR6 *)VAR4;
 	VAR9 = (const struct VAR8 *)VAR5;
 

	FUN2(VAR7->VAR10);


 
 	if (VAR2->VAR11) {
 		FUN3((VAR2, "",
		       FUN4(&VAR7->VAR12),
		       FUN5(&VAR7->VAR10) & VAR13,
		       sizeof(struct VAR8) + FUN5(&VAR9->VAR14) -
			       (long)(VAR4 - VAR5) - sizeof(struct VAR6)));
	} else {
		FUN3((VAR2, "",
		       FUN5(&VAR7->VAR10) & VAR13,
		       sizeof(struct VAR8) + FUN5(&VAR9->VAR14) -
			       (long)(VAR4 - VAR5) - sizeof(struct VAR6)));
	}

	
	if ((FUN5(&VAR7->VAR10) & VAR13) != 0)
		return -1;
	else
	{
		FUN3((VAR2, ""));
		return sizeof(struct VAR6);
	}
VAR15:
	FUN3((VAR2, ""));
	return -1;
}
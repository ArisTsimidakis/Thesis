static int FUN1(__be32 VAR1)
{
	int VAR2;
	struct VAR3 *VAR4;
	struct sockaddr_in VAR5;

	
	VAR4 = FUN2(NULL, NULL, VAR6, VAR7);
	if (FUN3(VAR4))
		return FUN4(VAR4);

	memset(&VAR5, 0, sizeof(VAR5));
	VAR5.VAR8 = VAR9;
	VAR5.VAR10.VAR11 = VAR1;

	
 	VAR2 = FUN5(VAR4, (struct VAR12 *)&VAR5);
 	

	if (VAR2 || VAR4->VAR13->VAR14 != VAR15)




 		VAR2 = -VAR16;
 
 	FUN6("",
		&VAR1, VAR2,
		VAR4->VAR13 ? VAR4->VAR13->VAR14 : -1);

	FUN7(VAR4);

	return VAR2;
}
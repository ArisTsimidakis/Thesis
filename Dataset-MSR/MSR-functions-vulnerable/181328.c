int FUN1(void)
{
 	FUN2("");
 	FUN2("", VAR1);
 	FUN2("", VAR2);

	FUN2("",

		VAR2 * VAR3);
 	FUN2("", VAR4);
 	FUN2("", VAR5);
 
	VAR6 = FUN3("", 0, 0);
	if (!VAR6)
		return -VAR7;

	if (!VAR8)
		VAR8 =
			FUN4(VAR9);

	
	FUN5(&VAR10);
#if FUN6(VAR11)
	FUN5(&VAR12);
#endif
	return 0;
}
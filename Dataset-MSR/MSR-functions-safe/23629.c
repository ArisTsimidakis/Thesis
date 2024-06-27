FUN1(VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	unsigned char *VAR5;

	VAR4 = FUN2(VAR2, 4 + 14);
	if (!VAR4)
		return;

	VAR5 = FUN3(VAR4, 4 + 14);

	
	*(VAR6 *)(VAR5 + 0) = VAR7;
	*(VAR6 *)(VAR5 + 1) = VAR8;
	*(VAR9 *)(VAR5 + 2) = FUN4(VAR10);

	
	*(VAR11 *)(VAR5 +  4) = FUN5(VAR12);
	*(VAR11 *)(VAR5 +  8) = FUN5(0); 
	*(VAR11 *)(VAR5 + 12) = FUN5(0); 
	*(VAR9 *)(VAR5 + 16) = FUN4(0); 
	VAR5 += 18;

	FUN6(VAR2, VAR4);
}
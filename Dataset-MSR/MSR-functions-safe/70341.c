FUN1(VAR1* VAR2, void* VAR3, uint32 VAR4, uint32 VAR5, uint32 VAR6, uint16 VAR7)
{
	if (!FUN2(VAR2, 1) || !FUN3(VAR2, VAR4, VAR5, VAR6, VAR7))
		return ((VAR8)(-1));
	return (FUN4(VAR2,
	    FUN5(VAR2, VAR4, VAR5, VAR6, VAR7), VAR3, (VAR8)(-1)));
}
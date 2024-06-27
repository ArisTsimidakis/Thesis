static int FUN1(struct VAR1 *VAR2,
		unsigned long VAR3)
{
	struct VAR4 *VAR5;
	int VAR6;

	FUN2(VAR7, "");

	if (!FUN3(VAR8))
		return -VAR9;

	
 	if (!FUN3(VAR10) || VAR3 == VAR11)
 		return FUN4(VAR2, 1);
 

	if ((unsigned int)VAR3 >= VAR2->VAR12)


 		return -VAR13;
 
 	VAR5 = FUN5(sizeof(*VAR5), VAR14);
	if (!VAR5)
		return -VAR15;

	VAR6 = FUN6(VAR2, VAR5);
	if (!VAR6)
		VAR6 = VAR5->VAR16[VAR3].VAR17;
	FUN7(VAR5);
	return VAR6;
}
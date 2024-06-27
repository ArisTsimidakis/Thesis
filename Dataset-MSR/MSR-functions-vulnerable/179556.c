static VAR1 FUN1(u64 VAR2, u64 VAR3, u64 VAR4, u64 VAR5, u64 VAR6)
{
	struct VAR7 *VAR8 = (struct VAR7 *)(long) VAR2;
	struct VAR9 *VAR10;

 	if (FUN2(VAR8))
 		return 0;
 






 	if (VAR3 > VAR8->VAR11 - sizeof(struct VAR9))
 		return 0;
 
 	VAR10 = (struct VAR9 *) &VAR8->VAR12[VAR3];

	if (VAR10->VAR13 > VAR3 - VAR8->VAR11)


 		return 0;
 
 	VAR10 = FUN3(VAR10, VAR4);
	if (VAR10)
		return (void *) VAR10 - (void *) VAR8->VAR12;

	return 0;
}
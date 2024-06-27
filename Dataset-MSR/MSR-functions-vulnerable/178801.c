static int FUN1(VAR1 *VAR2, unsigned long VAR3, unsigned long VAR4,
			     struct VAR5 *VAR6)
{
	struct VAR7 *VAR8;
	struct VAR9 *VAR10 = VAR6->private;
	VAR11 *VAR12;
 	int VAR13 = 0;
 
 	FUN2(VAR6->VAR14, VAR2);




 
 	
 	VAR8 = FUN3(VAR6->VAR14, VAR3);
	for (; VAR3 != VAR4; VAR3 += VAR15) {
		u64 VAR16 = VAR17;

		
		if (VAR8 && (VAR3 >= VAR8->VAR18))
			VAR8 = FUN3(VAR6->VAR14, VAR3);

		
		if (VAR8 && (VAR8->VAR19 <= VAR3) &&
		    !FUN4(VAR8)) {
			VAR12 = FUN5(VAR2, VAR3);
			VAR16 = FUN6(*VAR12);
			
			FUN7(VAR12);
		}
		VAR13 = FUN8(VAR3, VAR16, VAR10);
		if (VAR13)
			return VAR13;
	}

	FUN9();

	return VAR13;
}
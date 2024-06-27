static void FUN1(VAR1 *VAR2, int VAR3, char *VAR4,
  int VAR5)
{
	
	assert(!VAR2->VAR6);

	if (VAR3 != VAR7) {
		
		if (!VAR4) {
			
			if ((VAR2->VAR6 = FUN2(VAR8 +
			  VAR9))) {
				VAR2->VAR10 |= VAR11;
				VAR2->VAR12 = VAR8;
			} else {
				
				VAR2->VAR6 = VAR2->VAR13;
				VAR2->VAR12 = 1;
			}
		} else {
			
 			
 			assert(VAR5 > VAR9);

			VAR2->VAR6 = FUN3(VAR14 *, VAR4);


 			VAR2->VAR12 = VAR5 - VAR9;
 		}
 	} else {
		
		
		assert(!VAR4);
		
		VAR2->VAR6 = VAR2->VAR13;
		VAR2->VAR12 = 1;
	}
	VAR2->VAR15 = &VAR2->VAR6[VAR9];
	VAR2->VAR16 = VAR2->VAR15;
	VAR2->VAR17 = 0;
	VAR2->VAR10 |= VAR3 & VAR18;
}
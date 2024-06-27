static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
	int VAR6;
	int VAR7;
	int VAR8;
	jpc_fix_t VAR9;
	jpc_fix_t VAR10;
 	bool VAR11;
 	uint_fast32_t VAR12;
 














 	if (VAR3 == 0 && VAR4 == 0) {
 		return;
 	}
	VAR8 = 1 << VAR3;

	VAR11 = false;
	for (VAR6 = 0; VAR6 < FUN2(VAR2); ++VAR6) {
		for (VAR7 = 0; VAR7 < FUN3(VAR2); ++VAR7) {
			VAR9 = FUN4(VAR2, VAR6, VAR7);
			VAR10 = FUN5(VAR9);
			if (VAR10 >= VAR8) {
				
				VAR10 >>= VAR3;
				VAR9 = (VAR9 < 0) ? (-VAR10) : VAR10;
				FUN6(VAR2, VAR6, VAR7, VAR9);
 			} else {
 				
 				VAR10 <<= VAR4;

				VAR12 = (1 << VAR5) - 1;


 				
 				
				if (VAR10 & (~VAR12)) {
					if (!VAR11) {
						FUN7("");
						VAR11 = true;
					}
					VAR10 &= VAR12;
				}
				VAR9 = (VAR9 < 0) ? (-VAR10) : VAR10;
				FUN6(VAR2, VAR6, VAR7, VAR9);
			}
		}
	}
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, ut64 VAR5, const VAR6 *VAR7, int VAR8) {
	ut8 VAR9 = VAR7[0];
	ut64 VAR10 = VAR5 - FUN2 ();
	ut8 VAR11 = (VAR10+1)%4 ? 1 + 4 - (VAR10+1)%4 : 1;
 
 	if (VAR9 == 0xaa) {
 		

		if (VAR11 + 8 > VAR8) {


 			return VAR4->VAR12;
 		}

		int VAR13 = (VAR14)(FUN3 (VAR7, VAR11 + 4)),

			VAR15 = (VAR14)(FUN3 (VAR7, VAR11 + 8));




 
 		ut32 VAR16 = (VAR14) (FUN3 (VAR7, VAR11)), VAR17 = 0;
 		VAR4->VAR18 = FUN4 (VAR5, VAR13, VAR16);
		VAR19 *VAR20 = NULL;
		VAR11 += 12;
		if (VAR15 > VAR13 && ((VAR15 - VAR13)<(VAR21/4))) {
			
			for (VAR17 = 0; VAR17 <= VAR15 - VAR13; VAR11 += 4, VAR17++) {
				
				if (VAR11 + 4 >= VAR8) {
					
					break;
				}
				int VAR10 = (int)(VAR14)(FUN5 (VAR7, VAR11));
				VAR20 = FUN6 (VAR4->VAR18,
					VAR5 + VAR11, VAR17 + VAR13, VAR5 + VAR10);
				if (VAR20) {
					VAR20->VAR22 = VAR5+VAR10;
					VAR20->VAR23 = VAR5; 
				}
			}
		} else {
			FUN7 (""VAR24"", VAR5);
		}
	}
	VAR4->VAR12 = VAR11;
	return VAR4->VAR12;
}
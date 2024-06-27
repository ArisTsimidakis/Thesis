static inline int FUN1(struct VAR1 *VAR2,
			int FUN2(void *VAR3, char *VAR4, int VAR5, int VAR6,
			int VAR7, struct VAR8 *VAR9),
			void *VAR3, int VAR10, int VAR11, int VAR12,
			int VAR13, int VAR14,unsigned int VAR15,
			struct VAR16 *VAR17)
 
 {
 	struct VAR8 *VAR9;


 	int VAR18;
 
 	
 	if ((VAR9 = FUN3(&VAR2->VAR19)) == NULL) {

		struct frag_hdr VAR20;


 		VAR9 = FUN4(VAR2,
 			VAR11 + VAR12 + VAR13 + 20,
 			(VAR15 & VAR21), &VAR18);
		if (VAR9 == NULL)
			return VAR18;

		
		FUN5(VAR9, VAR11);

		
		FUN6(VAR9,VAR12 + VAR13);

		
		FUN7(VAR9);

		
 		VAR9->VAR22 = VAR9->VAR23 + VAR12;
 
 		VAR9->VAR24 = FUN8(VAR25);

		VAR9->VAR26 = VAR27;
 		VAR9->VAR28 = 0;
 

		

		FUN9(VAR9)->VAR29 = (VAR14 - VAR12 -

					     sizeof(struct VAR30)) & ~7;

		FUN9(VAR9)->VAR31 = VAR32;

		FUN10(&VAR20, VAR17);

		FUN9(VAR9)->VAR33 = VAR20.VAR34;
 		FUN11(&VAR2->VAR19, VAR9);




 	}
 






















 	return FUN12(VAR2, VAR9, VAR35, VAR3,
 				       (VAR10 - VAR13));
 }
int FUN1(struct VAR1 *VAR2,

		     struct VAR3 *VAR4,

		     struct VAR5 *VAR6,

		     bool VAR7)






 {

	int VAR8;

	u32 VAR9;

	u32 VAR10;

	u32 VAR11;

	int VAR12;



	if (VAR4->VAR13 !=

	    (VAR4->VAR14[0].VAR15 + VAR4->VAR16 + VAR4->VAR17[0].VAR15)) {

		FUN2("", VAR18);

		return -VAR19;

	}




 

	

	VAR8 = 1;








 

	

	VAR6->VAR20[VAR8].VAR21 = VAR4->VAR14[0].VAR21;

	VAR6->VAR20[VAR8].VAR15 = VAR4->VAR14[0].VAR15;

	VAR8++;



	

	VAR12 = 0;

	VAR10 = VAR4->VAR16;

	VAR11 = VAR4->VAR22;

	while (VAR10) {

		VAR6->VAR20[VAR8].VAR21 =

			FUN3(VAR4->VAR23[VAR12]) + VAR11;

		VAR9 = FUN4(VAR24, VAR10, (VAR25 - VAR11));

		VAR10 -= VAR9;

		VAR6->VAR20[VAR8].VAR15 = VAR9;



		VAR8++;

		VAR12++;

		VAR11 = 0; 








 	}
 

	

	if (VAR4->VAR17[0].VAR15) {

		unsigned char *VAR26 = VAR4->VAR17[0].VAR21;

		size_t VAR13 = VAR4->VAR17[0].VAR15;

		u32 VAR27 = FUN5(VAR4->VAR16);










 

		if (VAR7 && VAR27) {

			VAR26 += VAR27;

			VAR13 -= VAR27;

		}




 

		if (VAR13) {

			VAR6->VAR20[VAR8].VAR21 = VAR26;

			VAR6->VAR20[VAR8].VAR15 = VAR13;

			VAR8++;


































































 		}

	}


 

	FUN6(""

		"",

		VAR18, VAR8, VAR12, VAR4->VAR22, VAR4->VAR16,

		VAR4->VAR14[0].VAR15, VAR4->VAR17[0].VAR15);








 

	VAR6->VAR28 = VAR8;

	return 0;


 }
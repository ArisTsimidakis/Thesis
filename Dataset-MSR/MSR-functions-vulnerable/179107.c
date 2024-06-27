int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
 {
 	struct VAR5 *VAR6;

	unsigned int VAR7;

	unsigned long VAR8=0, VAR9;
 
 	VAR6 = FUN2(VAR2);
 

	if (VAR4->VAR10 > (~0UL >> VAR11)) {

		return -VAR12;

	}



	VAR8 = VAR6->VAR13 & VAR14;

	VAR7 = FUN3((VAR8 & ~VAR14) + VAR6->VAR15);



	VAR9 = VAR4->VAR10 << VAR11;



	if ((VAR4->VAR16 - VAR4->VAR17 + VAR9) > VAR7) {

		return -VAR12;

	}



	VAR9 += VAR8;

	VAR4->VAR10 = VAR9 >> VAR11;


 	VAR4->VAR18 = FUN4(VAR4->VAR18);
 	FUN5(VAR4->VAR18) |= (6 << 9); 
 

	if (FUN6(VAR4, VAR4->VAR17, VAR9 >> VAR11,

				VAR4->VAR16 - VAR4->VAR17,

				VAR4->VAR18)) {

		return -VAR19;

	}



	return 0;


 }
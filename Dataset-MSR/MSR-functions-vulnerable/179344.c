static int FUN1(struct VAR1 *VAR2,
 				struct VAR3 *VAR4,
 				struct VAR3 *VAR5,
				int VAR6)
{
	RING_IDX VAR7 = VAR2->VAR8.VAR9;
	int VAR10 = 0;

	if (!(VAR4->VAR11 & VAR12))
		return 0;
 
 	do {
 		if (VAR10 >= VAR6) {

			FUN2(VAR2->VAR13, "");




 			return -VAR10;
 		}
 
 		if (FUN3(VAR10 >= VAR14)) {

			FUN2(VAR2->VAR13, "");




 			return -VAR10;
 		}
 
 		memcpy(VAR5, FUN4(&VAR2->VAR8, VAR7 + VAR10),
 		       sizeof(*VAR5));
 		if (VAR5->VAR15 > VAR4->VAR15) {

			FUN2(VAR2->VAR13, "");




 			return -VAR10;
 		}
 
 		VAR4->VAR15 -= VAR5->VAR15;
 		VAR10++;
 
 		if (FUN3((VAR5->VAR16 + VAR5->VAR15) > VAR17)) {

			FUN2(VAR2->VAR13, "",


 				 VAR5->VAR16, VAR5->VAR15);


 			return -VAR10;
 		}
 	} while ((VAR5++)->VAR11 & VAR12);
	return VAR10;
}
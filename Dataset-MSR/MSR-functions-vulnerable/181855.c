static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
 {

	ulonglong VAR5;


 	if (FUN2(VAR2, 4, &VAR5))
 		return -1;

	*VAR4 = (VAR5 & 0x80000000) ? (-FUN3(VAR6, (((~VAR5) &

	  0x7fffffff) + 1))) : FUN3(VAR6, VAR5);




 	return 0;
 }
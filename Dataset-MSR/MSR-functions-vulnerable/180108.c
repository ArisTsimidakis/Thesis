static int FUN1(VAR1 *VAR2)
{
	register int VAR3;
 
 	if (VAR2->VAR4) {
 		for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++) {

			if (((VAR6 *)VAR2->VAR4[VAR3])->VAR7)	{




 				FUN2(&((VAR6 *)VAR2->VAR4[VAR3])->VAR7);
 			}
 			if (((VAR6 *)VAR2->VAR4[VAR3])->VAR8) {
				FUN3(((VAR6 *)VAR2->VAR4[VAR3])->VAR8);
			}
			FUN3(VAR2->VAR4[VAR3]);
		}
		FUN3(VAR2->VAR4);
	}
	return VAR9;
}
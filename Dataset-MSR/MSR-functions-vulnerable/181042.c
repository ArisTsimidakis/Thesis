FUN1(VAR1 *VAR2,
               register const VAR3 *VAR4, u_int VAR5)
 {
	register u_int VAR6;
	register u_int VAR7;
 
 	if (VAR5 < 3) {
 		FUN2((VAR2, "", VAR5));

		return;


 	}
 	if ((VAR5 + 1) & 3)
 		FUN2((VAR2, "", VAR5));


 	VAR6 = VAR4[2] - 1;
 	if (VAR6 < 3 || ((VAR6 + 1) & 3) || VAR6 > VAR5 + 1)
 		FUN2((VAR2, "", VAR4[2]));
 
 	for (VAR7 = 3; VAR7 < VAR5; VAR7 += 4) {


 		FUN2((VAR2, "", FUN3(VAR2, &VAR4[VAR7])));
 		if (VAR6 > VAR7)
 			FUN2((VAR2, ""));
 	}








 }
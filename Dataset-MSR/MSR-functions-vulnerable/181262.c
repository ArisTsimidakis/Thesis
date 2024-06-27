void FUN1 (VAR1 *VAR2) {
 	if (VAR2) {

		if (VAR2->VAR3 && VAR2->VAR3->VAR4)


 			free (VAR2->VAR3->VAR4->VAR5);


 		
 		free (VAR2->VAR3);
 		free (VAR2);
	}
}
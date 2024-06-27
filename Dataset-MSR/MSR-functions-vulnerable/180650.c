FUN1(struct VAR1 *VAR2)


 {
 	int VAR3;
 	int VAR4 = 0;




 	for (VAR3 = VAR5; VAR3 < VAR2->VAR6; VAR3++) {
 		if (VAR2->VAR7[VAR3].VAR8 == NULL)
 			continue;
 		FUN2(VAR2->VAR7[VAR3].VAR8);
 		FUN2(VAR2->VAR7[VAR3].VAR9);
 		if (FUN3(&VAR2->VAR7[VAR3], VAR10)) {
 			if (VAR4) {


 				return (400);
 			}
 			VAR4 = 1;
 		}
















 	}
 	return (0);
 }
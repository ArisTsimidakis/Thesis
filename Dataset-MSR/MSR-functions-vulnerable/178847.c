static void FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3, int VAR4)
{
	const struct VAR5 *class;

	if (VAR3->VAR5 == VAR1->VAR6->VAR5) {
		VAR1->VAR6->VAR5->FUN1(VAR1, VAR3, VAR4);
	} else {
		FUN2(class) {
			if (class == VAR1->VAR6->VAR5)
				break;
			if (class == VAR3->VAR5) {
				FUN3(VAR1->VAR6);
				break;
			}
		}
	}

	

	if (FUN4(VAR1->VAR6))


 		VAR1->VAR7 = 1;
 }
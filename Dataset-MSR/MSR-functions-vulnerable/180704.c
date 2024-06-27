static int FUN1(struct socket *VAR1, struct VAR2 *VAR3,
			 int VAR4)
{
	struct VAR5 *VAR6 = (struct VAR5 *) VAR3;
	struct VAR1 *VAR7 = VAR1->VAR7;
	int VAR8 = 0;

	FUN2("", VAR7, &VAR6->VAR9);

 	if (!VAR3 || VAR3->VAR10 != VAR11)
 		return -VAR12;
 






 	FUN3(VAR7);
 
 	if (VAR7->VAR13 != VAR14) {
		VAR8 = -VAR15;
		goto VAR16;
	}

	if (VAR7->VAR17 != VAR18) {
		VAR8 = -VAR12;
		goto VAR16;
	}

	FUN4(&FUN5(VAR7)->VAR19, &VAR6->VAR9);

	VAR7->VAR13 = VAR20;

VAR16:
	FUN6(VAR7);
	return VAR8;
}
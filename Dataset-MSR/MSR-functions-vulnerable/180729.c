static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	unsigned int VAR5;
	int VAR6;

	
 
 	

	if (VAR2->VAR7 < 2)

		return -1;








 
 	
 	VAR4 = VAR2->VAR4[0];
	VAR4->VAR8 =
				VAR2->VAR4[1]->VAR8;

	VAR5 = FUN2(VAR2->VAR9, VAR4->VAR8);
	for (VAR6 = 0; VAR6 < FUN3(VAR4->VAR10); ++VAR6)
		VAR4->VAR10[VAR6]->VAR5 = VAR5;

	return 0;
}
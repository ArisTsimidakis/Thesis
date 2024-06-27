FUN1(struct VAR1 *VAR2,
		   struct VAR3 *VAR4,
		   struct VAR5 *VAR6,
		   u32 VAR7,
		   u32 VAR8)
{
	struct VAR9 *VAR10;

	VAR10 = FUN2(VAR2, VAR7, VAR8);
	if (!VAR10)
		return;

	if (VAR4 && VAR6) {
		
		
 		VAR10->VAR7.VAR6[0] = 0x01;

		VAR10->VAR7.VAR6[1] = VAR4->VAR11 & 0xFF;


 		if (VAR6->VAR12 >= 256)
 			VAR10->VAR7.VAR6[2] = VAR6->VAR12 >> 8 | 0x40 ;
 		VAR10->VAR7.VAR6[3] = VAR6->VAR12 & 0xFF;
	}

	FUN3(&VAR10->VAR13, &VAR2->VAR14);
	FUN4(&VAR2->VAR15, &VAR2->VAR16);
}
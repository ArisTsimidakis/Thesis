static int FUN1(int VAR1, unsigned int VAR2, void VAR3 * VAR4)
{
	struct sbi_instrument VAR5;
	
	switch (VAR2) {
		case VAR6:
			FUN2(VAR7 "");
			if (FUN3(&VAR5, VAR4, sizeof(VAR5)))
				return -VAR8;
			if (VAR5.VAR9 < 0 || VAR5.VAR9 >= VAR10) {
				FUN2(VAR7 "", VAR5.VAR9);
				return -VAR11;
			}
			return FUN4(VAR5.VAR9, &VAR5);

		case VAR12:
			VAR13->VAR14.VAR15 = (VAR13->VAR16 == 12) ? 6 : VAR13->VAR16;
			if (FUN5(VAR4, &VAR13->VAR14, sizeof(VAR13->VAR14)))
				return -VAR8;
			return 0;

		case VAR17:
			return 0x7fffffff;

		case VAR18:
			if (VAR13->VAR19 == 2)
				FUN6();
			return 0;

		default:
			return -VAR11;
	}
}
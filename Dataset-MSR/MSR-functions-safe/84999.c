FUN1(const struct VAR1 *VAR2,
	     struct xt_counters VAR3[])
{
	struct VAR4 *VAR5;
	unsigned int VAR6;
	unsigned int VAR7;

	FUN2(VAR6) {
		VAR8 *VAR9 = &FUN3(VAR10, VAR6);

		VAR7 = 0;
		FUN4(VAR5, VAR2->VAR11, VAR2->VAR12) {
			struct VAR13 *VAR14;
			u64 VAR15, VAR16;
			unsigned int VAR17;

			VAR14 = FUN5(&VAR5->VAR3, VAR6);
			do {
				VAR17 = FUN6(VAR9);
				VAR15 = VAR14->VAR15;
				VAR16 = VAR14->VAR16;
			} while (FUN7(VAR9, VAR17));

			FUN8(VAR3[VAR7], VAR15, VAR16);
			++VAR7; 
			FUN9();
		}
	}
}
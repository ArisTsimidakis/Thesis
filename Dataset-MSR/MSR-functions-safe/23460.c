static void FUN1(struct VAR1 *VAR2,
				     struct VAR3 *VAR4,
				     struct VAR5 *VAR6)
{
	struct compound_hdr VAR7 = {
		.VAR8 = VAR6->VAR9->VAR10->VAR11,
	};

	FUN2(VAR4, VAR2, &VAR7);
	FUN3(VAR4, VAR6, &VAR7);
	FUN4(&VAR7);
}
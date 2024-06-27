static void FUN1(struct VAR1 *VAR2, void *VAR3)
{
	struct VAR1 *VAR4 = VAR2->VAR4;
	struct VAR5 *VAR6 = VAR3;
	struct VAR7 *VAR8 = VAR6->VAR8;
	struct stop_event_data VAR9 = {
		.VAR2	= VAR2,
	};

	if (!FUN2(VAR2))
		return;

	if (!VAR4)
		VAR4 = VAR2;

	
	if (FUN3(VAR4->VAR8) == VAR8)
		VAR6->VAR10 = FUN4(&VAR9);
}
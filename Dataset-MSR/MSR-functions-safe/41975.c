void FUN1(struct VAR1 *VAR2)
{
	FUN2("", VAR2->VAR3);

	VAR4 = VAR2;
	FUN3(VAR5, &VAR6);
	FUN4();
	FUN3(VAR7, &VAR6);

	FUN5("");
	FUN6(&VAR8);

	FUN5("");
	FUN7(&VAR6, VAR5,
		    VAR9);

	VAR4 = NULL;
	FUN8("");
}
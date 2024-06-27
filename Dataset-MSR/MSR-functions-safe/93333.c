static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
			      char *VAR6)
{
	struct VAR7 *VAR8 = FUN2(FUN3(VAR3));
	return FUN4(VAR8->VAR9)?
		sprintf(VAR6, "",
			FUN5(FUN6(), VAR8->VAR9)):
		sprintf(VAR6, "");
}
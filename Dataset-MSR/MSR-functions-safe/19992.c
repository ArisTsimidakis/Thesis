static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
		struct VAR5 *VAR6)
{
	struct nfs4_exception VAR7 = { };
	int VAR8;
	do {
		VAR8 = FUN2(FUN3(VAR2),
				FUN4(VAR2, VAR4, VAR6),
				&VAR7);
	} while (VAR7.VAR9);
	return VAR8;
}
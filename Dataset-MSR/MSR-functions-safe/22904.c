static int FUN1(struct VAR1 *VAR2, int VAR3, struct VAR4 *VAR5)
{
	struct nfs4_exception VAR6 = { };
	int VAR7;

	do {
		VAR7 = FUN2(FUN3(VAR2->VAR8),
				FUN4(VAR2, VAR3, VAR5),
				&VAR6);
	} while (VAR6.VAR9);
	return VAR7;
}
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			   struct VAR5 *VAR6, struct VAR7 *VAR8)
{
	struct nfs4_exception VAR9 = { };
	int VAR10;
	do {
		VAR10 = FUN2(VAR2, VAR4, VAR6, VAR8);
		switch (VAR10) {
		case 0:
		case -VAR11:
		case -VAR12:
			goto VAR13;
		default:
			VAR10 = FUN3(VAR2, VAR10, &VAR9);
		}
	} while (VAR9.VAR14);
VAR13:
	return VAR10;
}
static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6)
{
	struct xdr_stream VAR7;
	struct compound_hdr VAR8 = {
		.VAR9	= 3,
	};
	int VAR10;

	FUN2(&VAR7, &VAR2->VAR11, VAR4);
	FUN3(&VAR7, &VAR8);
	VAR10 = FUN4(&VAR7, VAR6->VAR12);
	if (VAR10)
		goto VAR13;
	VAR10 = FUN5(&VAR7, VAR6);
	if (VAR10 != 0)
		goto VAR13;
	VAR10 = FUN6(&VAR7, VAR6->VAR14);
VAR13:
	return VAR10;
}
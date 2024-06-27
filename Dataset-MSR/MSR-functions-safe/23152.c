static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const struct VAR5 *VAR6)
{
	struct xdr_stream VAR7;
	struct compound_hdr VAR8 = {
		.VAR9 = 7,
	};
	int VAR10;

	FUN2(&VAR7, &VAR2->VAR11, VAR4);
	FUN3(&VAR7, &VAR8);
	if ((VAR10 = FUN4(&VAR7, VAR6->VAR12)) != 0)
		goto VAR13;
	if ((VAR10 = FUN5(&VAR7)) != 0)
		goto VAR13;
	if ((VAR10 = FUN4(&VAR7, VAR6->VAR14)) != 0)
		goto VAR13;
	if ((VAR10 = FUN6(&VAR7, VAR6->VAR15, VAR6->VAR16)) != 0)
		goto VAR13;
	if ((VAR10 = FUN7(&VAR7, VAR6->VAR17)) != 0)
		goto VAR13;
	if ((VAR10 = FUN8(&VAR7)) != 0)
		goto VAR13;
	VAR10 = FUN7(&VAR7, VAR6->VAR17);
VAR13:
	return VAR10;
}
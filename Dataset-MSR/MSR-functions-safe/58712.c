long FUN1(aio_context_t VAR1, long VAR2,
		  struct iocb VAR3 *VAR3 *VAR4, bool VAR5)
{
	struct VAR6 *VAR7;
	long VAR8 = 0;
	int VAR9 = 0;
	struct blk_plug VAR10;
	struct kiocb_batch VAR11;

	if (FUN2(VAR2 < 0))
		return -VAR12;

	if (FUN2(VAR2 > VAR13/sizeof(*VAR4)))
		VAR2 = VAR13/sizeof(*VAR4);

	if (FUN2(!FUN3(VAR14, VAR4, (VAR2*sizeof(*VAR4)))))
		return -VAR15;

	VAR7 = FUN4(VAR1);
	if (FUN2(!VAR7)) {
		FUN5("");
		return -VAR12;
	}

	FUN6(&VAR11, VAR2);

	FUN7(&VAR10);

	
	for (VAR9=0; VAR9<VAR2; VAR9++) {
		struct iocb VAR3 *VAR16;
		struct iocb VAR17;

		if (FUN2(FUN8(VAR16, VAR4 + VAR9))) {
			VAR8 = -VAR15;
			break;
		}

		if (FUN2(FUN9(&VAR17, VAR16, sizeof(VAR17)))) {
			VAR8 = -VAR15;
			break;
		}

		VAR8 = FUN10(VAR7, VAR16, &VAR17, &VAR11, VAR5);
		if (VAR8)
			break;
	}
	FUN11(&VAR10);

	FUN12(VAR7, &VAR11);
	FUN13(VAR7);
	return VAR9 ? VAR9 : VAR8;
}
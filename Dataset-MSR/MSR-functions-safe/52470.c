static int FUN1(struct socket *VAR1, struct VAR2 *VAR3, size_t VAR4)
{
	struct VAR1 *VAR5 = VAR1->VAR5;
	struct VAR6 *VAR6 = FUN2(VAR5);
	struct VAR7 *VAR8 = FUN3(VAR5);
	struct VAR9 *VAR10 = &VAR8->VAR11;
	struct sk_buff_head VAR12;
	FUN4(struct VAR13 *, VAR14, VAR3->VAR15);
	u32 VAR16 = VAR8->VAR16;
	int VAR17 = -VAR18;
	long VAR19;
	u32 VAR20;
	uint VAR21, send, VAR22 = 0;
	struct iov_iter VAR23;
	int VAR24 = VAR25;

	
	if (FUN5(VAR14)) {
		VAR17 = FUN6(VAR1, VAR3, VAR4);
		VAR24 = FUN7(VAR10);
		if (VAR4 && (VAR4 == VAR17))
			VAR8->VAR26 = FUN8(VAR8, VAR4 + VAR24);
		return VAR17;
	}
	if (VAR4 > (VAR27)VAR28)
		return -VAR29;

	if (FUN5(VAR1->VAR30 != VAR31)) {
		if (VAR1->VAR30 == VAR32)
			return -VAR33;
		else
			return -VAR34;
	}

	VAR19 = FUN9(VAR5, VAR3->VAR35 & VAR36);
	VAR20 = FUN10(VAR8);
	FUN11(&VAR12);

VAR37:
	VAR23 = VAR3->VAR38;
	VAR21 = VAR8->VAR39;
	send = FUN12(VAR27, VAR4 - VAR22, VAR40);
	VAR17 = FUN13(VAR10, VAR3, VAR22, send, VAR21, &VAR12);
	if (FUN5(VAR17 < 0))
		return VAR17;

	do {
		if (FUN14(!FUN15(VAR8))) {
			VAR17 = FUN16(VAR6, &VAR12, VAR20, VAR16);
			if (FUN14(!VAR17)) {
				VAR8->VAR26 += FUN8(VAR8, send + VAR24);
				VAR22 += send;
				if (VAR22 == VAR4)
					return VAR4;
				goto VAR37;
			}
			if (VAR17 == -VAR29) {
				FUN17(&VAR12);
				VAR8->VAR39 = FUN18(VAR6, VAR20,
								 VAR16);
				VAR3->VAR38 = VAR23;
				goto VAR37;
			}
			if (VAR17 != -VAR41)
				break;

			VAR8->VAR42 = 1;
		}
		VAR17 = FUN19(VAR1, &VAR19);
	} while (!VAR17);

	FUN17(&VAR12);
	return VAR22 ? VAR22 : VAR17;
}
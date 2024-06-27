static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3,
					VAR5);
	FUN3(signal, VAR6);
	struct virtio_scsi_cmd_resp VAR7;
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;
	struct VAR12 *VAR12;
	struct iov_iter VAR13;
	int VAR14, VAR15;

	FUN4(signal, VAR6);
	VAR11 = FUN5(&VAR4->VAR16);
	while (VAR11) {
		VAR9 = FUN6(VAR11, struct VAR8,
				     VAR17);
		VAR11 = FUN7(VAR11);
		VAR12 = &VAR9->VAR18;

		FUN8("", VAR19,
			VAR9, VAR12->VAR20, VAR12->VAR21);

		memset(&VAR7, 0, sizeof(VAR7));
		VAR7.VAR22 = FUN9(VAR9->VAR23, VAR12->VAR20);
		
		VAR7.VAR24 = VAR12->VAR21;
		VAR7.VAR25 = FUN9(VAR9->VAR23,
						 VAR12->VAR26);
		memcpy(VAR7.VAR27, VAR9->VAR28,
		       VAR12->VAR26);

		FUN10(&VAR13, VAR29, VAR9->VAR30,
			      VAR9->VAR31, sizeof(VAR7));
		VAR14 = FUN11(&VAR7, sizeof(VAR7), &VAR13);
		if (FUN12(VAR14 == sizeof(VAR7))) {
			struct VAR32 *VAR33;
			FUN13(VAR9->VAR23, VAR9->VAR34, 0);
			VAR33 = FUN2(VAR9->VAR23, struct VAR32, VAR15);
			VAR15 = VAR33 - VAR4->VAR35;
			FUN14(VAR15, signal);
		} else
			FUN15("");

		FUN16(VAR9);
	}

	VAR15 = -1;
	while ((VAR15 = FUN17(signal, VAR6, VAR15 + 1))
		< VAR6)
		FUN18(&VAR4->VAR36, &VAR4->VAR35[VAR15].VAR15);
}
VAR1 FUN1(VAR2)
{
	VAR3 *VAR4 = (VAR3 *) VAR5;
	VAR6 *VAR7 = FUN2(VAR8).VAR9;
	post_var_data_t VAR10;

	if (VAR7 && VAR11 == FUN3(VAR7)) {
		memset(&VAR10, 0, sizeof(VAR10));

		while (!FUN4(VAR7)) {
			char VAR12[VAR13] = {0};
			size_t VAR14 = FUN5(VAR7, VAR12, VAR13);

			if (VAR14 && VAR14 != (VAR15) -1) {
				FUN6(&VAR10.VAR16, VAR12, VAR14);

				if (VAR11 != FUN7(VAR4, &VAR10, 0)) {
					FUN8(&VAR10.VAR16);
					return;
				}
			}

			if (VAR14 != VAR13){
				break;
			}
		}

		if (VAR10.VAR16.VAR7) {
			FUN7(VAR4, &VAR10, 1);
			FUN8(&VAR10.VAR16);
		}
	}
}
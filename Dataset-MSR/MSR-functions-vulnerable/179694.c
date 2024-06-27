FUN1(struct VAR1 *VAR1,
		     struct socket *VAR2,
		     struct VAR3 *VAR4, size_t VAR5, int VAR6)
{
	struct VAR2 *VAR7;
	struct VAR8 *VAR9;
	int VAR10;
	size_t VAR11;
	ssize_t VAR12;
	long VAR13;
	struct vsock_transport_recv_notify_data VAR14;

	FUN2(VAR15);

	VAR7 = VAR2->VAR7;
 	VAR9 = FUN3(VAR7);
 	VAR10 = 0;
 

	VAR4->VAR16 = 0;


 	FUN4(VAR7);
 
 	if (VAR7->VAR17 != VAR18) {
		
		if (FUN5(VAR7, VAR19))
			VAR10 = 0;
		else
			VAR10 = -VAR20;

		goto VAR21;
	}

	if (VAR6 & VAR22) {
		VAR10 = -VAR23;
		goto VAR21;
	}

	
	if (VAR7->VAR24 & VAR25) {
		VAR10 = 0;
		goto VAR21;
	}

	
	if (!VAR5) {
		VAR10 = 0;
		goto VAR21;
	}

	
	VAR11 = FUN6(VAR7, VAR6 & VAR26, VAR5);
	if (VAR11 >= VAR27->FUN7(VAR9)) {
		VAR10 = -VAR28;
		goto VAR21;
	}
	VAR13 = FUN8(VAR7, VAR6 & VAR29);
	VAR12 = 0;

	VAR10 = VAR27->FUN9(VAR9, VAR11, &VAR14);
	if (VAR10 < 0)
		goto VAR21;

	FUN10(FUN11(VAR7), &VAR15, VAR30);

	while (1) {
		s64 VAR31 = FUN12(VAR9);

		if (VAR31 < 0) {
			

			VAR10 = -VAR28;
			goto VAR32;
		} else if (VAR31 > 0) {
			ssize_t read;

			VAR10 = VAR27->FUN13(
					VAR9, VAR11, &VAR14);
			if (VAR10 < 0)
				break;

			read = VAR27->FUN14(
					VAR9, VAR4->VAR33,
					VAR5 - VAR12, VAR6);
			if (read < 0) {
				VAR10 = -VAR28;
				break;
			}

			VAR12 += read;

			VAR10 = VAR27->FUN15(
					VAR9, VAR11, read,
					!(VAR6 & VAR34), &VAR14);
			if (VAR10 < 0)
				goto VAR32;

			if (read >= VAR11 || VAR6 & VAR34)
				break;

			VAR11 -= read;
		} else {
			if (VAR7->VAR35 != 0 || (VAR7->VAR24 & VAR25)
			    || (VAR9->VAR36 & VAR37)) {
				break;
			}
			
			if (VAR13 == 0) {
				VAR10 = -VAR38;
				break;
			}

			VAR10 = VAR27->FUN16(
					VAR9, VAR11, &VAR14);
			if (VAR10 < 0)
				break;

			FUN17(VAR7);
			VAR13 = FUN18(VAR13);
			FUN4(VAR7);

			if (FUN19(VAR39)) {
				VAR10 = FUN20(VAR13);
				break;
			} else if (VAR13 == 0) {
				VAR10 = -VAR38;
				break;
			}

			FUN10(FUN11(VAR7), &VAR15,
					VAR30);
		}
	}

	if (VAR7->VAR35)
		VAR10 = -VAR7->VAR35;
	else if (VAR7->VAR24 & VAR25)
		VAR10 = 0;

	if (VAR12 > 0) {
		

		if (!(VAR6 & VAR34)) {
			
			if (VAR9->VAR36 & VAR37) {
				if (FUN12(VAR9) <= 0) {
					VAR7->VAR17 = VAR40;
					FUN21(VAR7, VAR19);
					VAR7->FUN22(VAR7);
				}
			}
		}
		VAR10 = VAR12;
	}

VAR32:
	FUN23(FUN11(VAR7), &VAR15);
VAR21:
	FUN17(VAR7);
	return VAR10;
}
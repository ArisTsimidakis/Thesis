static int FUN1(struct VAR1 *VAR2,
			   __u32 VAR3,
			   int VAR4,
			   int VAR5,
			   int VAR6)
{
	
	int VAR7;
	int VAR8;
	__u64 VAR9;

	VAR7 = FUN2(VAR2, VAR3,
			VAR4, VAR5, &VAR9);
	if (VAR7 < 0) {
 		return VAR7;
 	}
 

	FUN3(VAR10, 1, 0, VAR2, VAR9);


 
 	VAR8 = (VAR3 >> 4) & 0x3f;
 	if (FUN4(VAR2)) {
		__u64 VAR11;

		if (!FUN5(VAR12, (unsigned long) VAR9, 1UL<<VAR5)) {
			return -1;
		}

		if (FUN6(&VAR11, (const void *)(int)VAR9, (1 << VAR5)) > 0) {
			return -1; 
		}
		switch (VAR5) {
		case 1:
			if (VAR6) {
				VAR2->VAR2[VAR8] = (VAR13)(VAR14) *(VAR15 *) &VAR11;
			} else {
				VAR2->VAR2[VAR8] = (VAR13) *(VAR16 *) &VAR11;
			}
			break;
		case 2:
			VAR2->VAR2[VAR8] = (VAR13)(VAR14) *(VAR17 *) &VAR11;
			break;
		case 3:
			VAR2->VAR2[VAR8] = VAR11;
			break;
		default:
			FUN7("",
				VAR5, (unsigned long) VAR2->VAR18);
			break;
		}
	} else {
		
		__u64 VAR19, VAR20;

		switch (VAR5) {
		case 1:
			FUN8(VAR9, VAR6, &VAR2->VAR2[VAR8]);
			break;
		case 2:
			asm ("" : "" (VAR19) : "" (VAR9));
			asm ("" : "" (VAR20) : "" (VAR9));
			VAR2->VAR2[VAR8] = VAR19 | VAR20;
			break;
		case 3:
			asm ("" : "" (VAR19) : "" (VAR9));
			asm ("" : "" (VAR20) : "" (VAR9));
			VAR2->VAR2[VAR8] = VAR19 | VAR20;
			break;

		default:
			FUN7("",
				VAR5, (unsigned long) VAR2->VAR18);
			break;
		}
	}

	return 0;

}
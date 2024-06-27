static void FUN1(struct VAR1 *VAR2, u8 VAR3)


 {










 	if (!(VAR2->VAR4[VAR3].VAR5 & VAR6))
 		FUN2(VAR2, ""
 			"",
			VAR3, VAR2->VAR4[VAR3].VAR7.VAR7.VAR8);

	if (VAR2->VAR4[VAR3].VAR5 & VAR9) {
		FUN3(VAR2,
				""
				"",
				VAR3, VAR2->VAR4[VAR3].VAR7.VAR7.VAR8);
	} else {
		VAR2->VAR4[VAR3].VAR5 |= VAR9;
 		FUN3(VAR2, "",
 				VAR3, VAR2->VAR4[VAR3].VAR7.VAR7.VAR8);
 	}


 }
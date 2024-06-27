static struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4, int VAR5, struct VAR6 *VAR7, struct VAR8 *VAR9)


 {
 	struct nfs4_exception VAR10 = { };
 	struct VAR1 *VAR11;
 	int VAR12;
 
 	do {

		VAR12 = FUN2(VAR3, VAR4, VAR5, VAR7, VAR9, &VAR11);


 		if (VAR12 == 0)
 			break;
 		
		if (VAR12 == -VAR13) {
			FUN3(VAR14 ""
					"",
					FUN4(VAR3)->VAR15->VAR16);
			VAR10.VAR17 = 1;
			continue;
		}
		
		if (VAR12 == -VAR18) {
			VAR10.VAR17 = 1;
			continue;
		}
		if (VAR12 == -VAR19) {
			
			VAR10.VAR17 = 1;
			continue;
		}
		VAR11 = FUN5(FUN6(FUN4(VAR3),
					VAR12, &VAR10));
	} while (VAR10.VAR17);
	return VAR11;
}
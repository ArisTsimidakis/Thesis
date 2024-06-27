static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
 {
 	struct crypto_report_acomp VAR5;
 

	FUN2(VAR5.VAR6, "", sizeof(VAR5.VAR6));


 
 	if (FUN3(VAR2, VAR7,
 		    sizeof(struct VAR8), &VAR5))
		goto VAR9;
	return 0;

VAR9:
	return -VAR10;
}
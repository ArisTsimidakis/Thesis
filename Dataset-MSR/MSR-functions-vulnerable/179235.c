static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
 	struct crypto_report_aead VAR5;
 	struct VAR6 *VAR7 = &VAR4->VAR8;
 

	snprintf(VAR5.VAR9, VAR10, "", "");

	snprintf(VAR5.VAR11, VAR10, "",

		 VAR7->VAR11 ?: "");




 
 	VAR5.VAR12 = VAR4->VAR13;
 	VAR5.VAR14 = VAR7->VAR14;
	VAR5.VAR15 = VAR7->VAR15;

	if (FUN2(VAR2, VAR16,
		    sizeof(struct VAR17), &VAR5))
		goto VAR18;
	return 0;

VAR18:
	return -VAR19;
}
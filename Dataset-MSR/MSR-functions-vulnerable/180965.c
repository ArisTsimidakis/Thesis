FUN1(VAR1 *VAR2, u_char tpay VAR3,
		const struct VAR4 *VAR5, u_int item_len VAR3,
		const VAR6 *ep VAR3, uint32_t phase VAR3, uint32_t doi VAR3,
		uint32_t proto VAR3, int depth VAR3)
{
	struct isakmp_gen VAR7;

	FUN2((VAR2,"", FUN3(VAR8)));

	FUN4(*VAR5);
 	FUN5(&VAR7, VAR5, sizeof(VAR7));
 	FUN2((VAR2,"", FUN6(VAR7.VAR9) - 4));
 	if (2 < VAR2->VAR10 && 4 < FUN6(VAR7.VAR9)) {


 		FUN2((VAR2,""));
 		if (!FUN7(VAR2, (const VAR11 *)(VAR5 + 1), FUN6(VAR7.VAR9) - 4))
 			goto VAR12;
	}
	return (const VAR6 *)VAR5 + FUN6(VAR7.VAR9);
VAR12:
	FUN2((VAR2,"", FUN3(VAR8)));
	return NULL;
}
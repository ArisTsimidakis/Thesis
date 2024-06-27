static VAR1 FUN1(struct VAR2 *VAR3, const char VAR4 *VAR5,
			    size_t VAR6, VAR7 *VAR8)
{
	struct VAR9 *VAR2 = VAR3->VAR10;
 	struct ib_ucm_cmd_hdr VAR11;
 	ssize_t VAR12;
 






 	if (VAR6 < sizeof(VAR11))
 		return -VAR13;
 
	if (FUN2(&VAR11, VAR5, sizeof(VAR11)))
		return -VAR14;

	if (VAR11.VAR15 >= FUN3(VAR16))
		return -VAR13;

	if (VAR11.VAR17 + sizeof(VAR11) > VAR6)
		return -VAR13;

	VAR12 = VAR16[VAR11.VAR15](VAR2, VAR5 + sizeof(VAR11),
					VAR11.VAR17, VAR11.VAR18);
	if (!VAR12)
		VAR12 = VAR6;

	return VAR12;
}
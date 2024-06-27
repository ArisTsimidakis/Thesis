static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
 {
 	
	__u32 VAR5 *VAR6 = (__u32 VAR5 *)(unsigned long)VAR4->VAR7;
	struct VAR8 *VAR9 = FUN2(VAR2);
	int VAR10 = sizeof(*VAR9) / sizeof(VAR11);
	u32 VAR12;

	
	VAR12 = FUN3(VAR4->VAR13);
	if (VAR12 >= VAR10 ||
 	    (VAR12 + (FUN4(VAR4->VAR13) / sizeof(VAR11))) >= VAR10)
 		return -VAR14;
 






 	if (FUN5(VAR6, ((VAR15 *)VAR9) + VAR12, FUN4(VAR4->VAR13)))
 		return -VAR16;
 
	return 0;
}
static inline void FUN1(int VAR1, u64 VAR2, gpa_t VAR3)
{
	struct {
		u64 VAR2, VAR3;
	} VAR4 = {VAR2, VAR3};

	asm volatile (FUN2(VAR5)
			
			""
			: : "" (&VAR4), "" (VAR1) : "", "");
}
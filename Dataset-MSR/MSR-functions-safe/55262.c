int FUN1(struct VAR1 *VAR2,
			 struct VAR3 *VAR4,
			 struct VAR5 *VAR6,
			 const struct VAR7 *VAR8)
{
	typedef int (*VAR9)(struct VAR1 *,
				    struct VAR3 *,
				    struct VAR5 *,
				    const struct VAR7 *);
	static const quirk_func_t VAR10[] = {
		[VAR11] = VAR12,
		[VAR13] = VAR14,
		[VAR15] = VAR16,
		[VAR17] = VAR18,
		[VAR19] = VAR18,
		[VAR20] = VAR18,
		[VAR21] = VAR18,
		[VAR22] = VAR18,
		[VAR23] = VAR18,
		[VAR24] = VAR18,
		[VAR25] = VAR18,
		[VAR26] = VAR18,
		[VAR27] = VAR18,
		[VAR28] = VAR18,
		[VAR29] = VAR18,
		[VAR30] = VAR31,
		[VAR32] = VAR33,
		[VAR34] = VAR35,
		[VAR36] = VAR37,
		[VAR38] = VAR39,
	};

	if (VAR8->VAR40 < VAR41) {
		return VAR10[VAR8->VAR40](VAR2, VAR4, VAR6, VAR8);
	} else {
		FUN2(VAR2, "", VAR8->VAR40);
		return -VAR42;
	}
}
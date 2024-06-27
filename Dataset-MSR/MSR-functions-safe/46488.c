BN_ULONG FUN1 (VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4,int VAR5)
{ BN_ULONG VAR6;
  size_t VAR7=0;

	if (VAR5 <= 0) return 0;

	asm volatile (
	""	
	""
	""
	""
	""
	""
	""
	""
	""
		: ""(VAR6),""(VAR5),""(VAR7)
		: ""(VAR2),""(VAR3),""(VAR4)
		: "", ""
	);

  return VAR6&1;
}
static  VAR1* FUN1(VAR2 *VAR3, ut64 VAR4, int VAR5) {


 	VAR1 *VAR6 = NULL;
 	RFlagsAtOffset VAR7;
 	VAR7.VAR4 = VAR4;
	if (VAR5 >= 0) {
		VAR6 = FUN2 (VAR3->VAR8, &VAR7);
	} else {
		VAR6 = FUN3 (VAR3->VAR8, &VAR7);
	}
	if (VAR5 == 0 && VAR6 && VAR6->VAR4 != VAR4) {
		return NULL;
	}
	return VAR6;
}
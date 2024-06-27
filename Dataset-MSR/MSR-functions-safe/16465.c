void FUN1(){
#if !FUN2(VAR1)
	if (!VAR2) return;

	const char *VAR3 = NULL;
	bool VAR4 = FUN3("", true);
	if (VAR4) {
				
		VAR5 *VAR6 = new FUN4(-1, NULL, NULL);
		VAR3 = VAR6->FUN5();	
		delete VAR6;
		FUN6(VAR3, 3);
		if (VAR3 != NULL)
			delete []VAR3;
	}
  
#endif	
}
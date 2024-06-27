VAR1::FUN1(VAR2::string VAR3, VAR2::VAR4 &VAR5, VAR2::VAR4 &VAR6)
 {
        PROC_ID VAR7 = FUN2(VAR3.FUN3());

       if (VAR7.VAR8 < 0 || VAR7.VAR9 < 0) {


                FUN4(VAR10, "", VAR3.FUN3());
                VAR6 = "";
                return false;
	}

	if (!FUN5(VAR7.VAR8,
				 VAR7.VAR9,
				 VAR5.FUN3(),
				 true, 
				 true, 
				 false, 
				 false, 
				 false 
				 )) {
		VAR6 = "";
		return false;
	}

	return true;
}
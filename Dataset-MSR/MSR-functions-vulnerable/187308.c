FUN1 (xmlXPathParserContextPtr VAR1, int VAR2,
		      VAR3 ** VAR4) {

    int VAR5 = 0;

    if ((VAR2 < 1) || (VAR2 > 2)) {
	FUN2 (VAR1);
	return 0;
     }
 
     *VAR4 = FUN3 (VAR1);

    VAR5 = FUN4 (*VAR4);


 
     if (VAR5 == 0) {
 	FUN5 (VAR1);
	FUN6 (*VAR4);
	return 0;
    }

    return VAR5;
}
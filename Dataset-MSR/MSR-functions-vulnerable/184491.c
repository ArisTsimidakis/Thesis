FUN1(xmlXPathParserContextPtr VAR1, int VAR2){
     xmlNodePtr VAR3 = NULL;


     long VAR4;
     xmlChar VAR5[30];
     xmlDocPtr VAR6;
 
     if (VAR2 == 0) {
 	VAR3 = VAR1->VAR7->VAR8;
     } else if (VAR2 == 1) {

	xmlXPathObjectPtr VAR9;
 	xmlNodeSetPtr VAR10;
 	int VAR11, VAR12;
 
	if ((VAR1->VAR13 == NULL) || (VAR1->VAR13->VAR14 != VAR15)) {
	    VAR1->VAR16 = VAR17;
	    FUN2(FUN3(VAR1), NULL, NULL,
		"");
	    return;
	}
	VAR9 = FUN4(VAR1);
	VAR10 = VAR9->VAR18;
	if ((VAR10 == NULL) || (VAR10->VAR19 <= 0)) {
	    FUN5(VAR9);
	    FUN6(VAR1, FUN7(""));
	    return;
	}
	VAR3 = VAR10->VAR20[0];
	for (VAR11 = 1;VAR11 < VAR10->VAR19;VAR11++) {
	    VAR12 = FUN8(VAR3, VAR10->VAR20[VAR11]);
 	    if (VAR12 == -1)
 	        VAR3 = VAR10->VAR20[VAR11];
 	}

	FUN5(VAR9);
     } else {
 	FUN2(FUN3(VAR1), NULL, NULL,
 		"", VAR2);
	VAR1->VAR16 = VAR21;
	return;
    }
    
    if (VAR3->VAR14 != VAR22)
        VAR6 = VAR3->VAR6;
    else {
        xmlNsPtr VAR23 = (VAR24) VAR3;

        if (VAR23->VAR7 != NULL)
            VAR6 = VAR23->VAR7;
        else
            VAR6 = VAR1->VAR7->VAR6;
 
     }
 






     VAR4 = (long)((char *)VAR3 - (char *)VAR6);
     if (VAR4 >= 0) {
       sprintf((char *)VAR5, "", VAR4);
    } else {
      sprintf((char *)VAR5, "", -VAR4);
    }
    FUN6(VAR1, FUN9(VAR5));
}
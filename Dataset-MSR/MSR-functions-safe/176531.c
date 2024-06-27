FUN1(const char *VAR1) {
    xmlURIPtr VAR2;
 int VAR3;

 if (VAR1 == NULL)
 return(NULL);
    VAR2 = FUN2();
 if (VAR2 != NULL) {
	VAR3 = FUN3(VAR2, VAR1);
 if (VAR3) {
	    FUN4(VAR2);
 return(NULL);
 }
 }
 return(VAR2);
}
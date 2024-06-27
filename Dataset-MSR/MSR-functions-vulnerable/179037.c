const char *FUN1(int VAR1)
{
  const char *VAR2;

  switch (VAR1) {
#VAR3 FUN2(VAR4) case VAR4: VAR2 = #VAR4; break;
	FUN2(VAR5);
	FUN2(VAR6);
	FUN2(VAR7);
	FUN2(VAR8);
	FUN2(VAR9);
	FUN2(VAR10);
	FUN2(VAR11);
	FUN2(VAR12);
	FUN2(VAR13);
	FUN2(VAR14);
	FUN2(VAR15);
 	FUN2(VAR16);
 	FUN2(VAR17);
 	FUN2(VAR18);




 #undef VAR19
   default:
 	switch (VAR1 & 0xff) {
#VAR3 FUN2(VAR4, VAR20) case VAR4: VAR2 = #VAR20; break
	  FUN2(10, VAR11);
	  FUN2(11, VAR12);
	  FUN2(12, VAR13);
	  FUN2(13, VAR14);
#undef VAR19
	default:
	  VAR2 = "";
	  break;
	}
	break;
  }

  return VAR2;
}
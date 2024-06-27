void VAR1::FUN1(VAR2 *VAR3) {
  VAR4 = VAR3->FUN2();

  FUN3(VAR5);
  VAR5 = FUN4(VAR6.VAR7 / 65535.0,
					     VAR6.VAR8 / 65535.0,
					     VAR6.VAR9 / 65535.0,
					     VAR4);
  
  FUN5(printf ("", VAR4));
}
FUN1 (VAR1 *VAR2,
				    gint    VAR3,
				    gint    VAR4,
 				    gint    VAR5)
 {
   VAR1 *VAR6;


   VAR7 *VAR8;

  static cairo_user_data_key_t VAR9;
   int VAR10;
 

  VAR6 = (VAR1 *)FUN2 (4 * VAR3 * VAR4);

  VAR8 = FUN3 ((unsigned char *)VAR6,

						 VAR11,

						 VAR3, VAR4, 4 * VAR3);

  FUN4 (VAR8, &VAR9,

			       VAR6, (VAR12)VAR13);












 
   for (VAR10 = VAR4; VAR10; VAR10--) {
     VAR1 *VAR14 = VAR2;
     VAR1 *VAR15 = VAR6;
     VAR1 *VAR16 = VAR14 + 3 * VAR3;

	  


     while (VAR14 < VAR16) {
 #if VAR17 == VAR18
       VAR15[0] = VAR14[2];
       VAR15[1] = VAR14[1];
       VAR15[2] = VAR14[0];

#else	  


       VAR15[1] = VAR14[0];
       VAR15[2] = VAR14[1];
       VAR15[3] = VAR14[2];
#endif
      VAR14 += 3;
      VAR15 += 4;
     }
 
     VAR2 += VAR5;

    VAR6 += 4 * VAR3;


   }
 
   return VAR8;
}
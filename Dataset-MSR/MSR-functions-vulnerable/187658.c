FUN1(PNG_CONST VAR1 *this,


     VAR2 *VAR3, png_const_structp VAR4,

    PNG_CONST VAR5 *VAR6)


 {
    
    if ((VAR3->VAR7 & VAR8) == 0 && VAR3->VAR9)

      FUN2(VAR3, &VAR6->this);


 
    
    if (VAR3->VAR7 == VAR10)
 {
 
 if (VAR3->VAR11 < 8)
         VAR3->VAR12 = VAR3->VAR11 = 8;

 
      VAR3->VAR7 = VAR13;
 }

 else if (VAR3->VAR7 == VAR14)
      VAR3->VAR7 = VAR15;

 this->VAR16->FUN3(this->VAR16, VAR3, VAR4, VAR6);
}
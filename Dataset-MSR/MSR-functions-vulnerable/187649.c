FUN1(PNG_CONST VAR1 *this,


     VAR2 *VAR3, png_const_structp VAR4,

    PNG_CONST VAR5 *VAR6)


 {
    
 if (VAR3->VAR7 == VAR8)

       FUN2(VAR3);
 
    if (VAR3->VAR9)

      FUN3(VAR3, &VAR6->this);


 
    if (VAR3->VAR10 < 16)
       VAR3->VAR11 = VAR3->VAR10 = 16;

 this->VAR12->FUN4(this->VAR12, VAR3, VAR4, VAR6);
}
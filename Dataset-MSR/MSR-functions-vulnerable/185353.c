void VAR1::FUN1()
{
    
    
    
    
     VAR2<VAR3<VAR4> > VAR5;
     VAR5.FUN2(VAR6.FUN3(), VAR6.FUN4());
     VAR2<VAR3<VAR4> >::iterator VAR7 = VAR5.FUN4();

    for (VAR2<VAR3<VAR4> >::iterator VAR8 = VAR5.FUN3(); VAR8 != VAR7; ++VAR8)

        (*VAR8)->FUN5()->FUN3();










 }
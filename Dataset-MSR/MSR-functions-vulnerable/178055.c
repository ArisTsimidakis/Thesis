ZEND_API void FUN1(VAR1 *VAR2)
{
	FUN2(VAR2);
	FUN3(FUN4(VAR2));
	FUN5(VAR2);
 
 #ifdef VAR3
        FUN6(VAR2->VAR4);

       FUN6(VAR2->VAR4);


 #endif
 }
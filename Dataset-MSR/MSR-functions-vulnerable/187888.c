long VAR1::FUN1(VAR2* VAR3, long long VAR4, long VAR5,

                               long long& VAR6) {

  assert(VAR3);

  assert(VAR4 >= 0);

  assert(VAR5 > 0);

  assert(VAR5 <= 8);








 

  {

    signed char VAR7;




 

    const long VAR8 = VAR3->FUN2(VAR4, 1, (unsigned char*)&VAR7);




 

    if (VAR8 < 0)

      return VAR8;



    VAR6 = VAR7;



    ++VAR4;

  }




 
   for (long VAR9 = 1; VAR9 < VAR5; ++VAR9) {
     unsigned char VAR7;

 const long VAR8 = VAR3->FUN2(VAR4, 1, &VAR7);

 if (VAR8 < 0)
 return VAR8;

    VAR6 <<= 8;
    VAR6 |= VAR7;


     ++VAR4;
   }
 

  return 0;  




 }
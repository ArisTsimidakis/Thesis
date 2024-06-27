long VAR1::FUN1(long long VAR2,
 long long VAR3, 
 long long VAR4, long long VAR5) {
  assert((VAR2 == 0x20) || (VAR2 == 0x23)); 

 if (VAR6 < 0) { 
    assert(VAR7 == NULL);

     assert(VAR8 == 0);
 
     VAR8 = 1024;

    VAR7 = new VAR9* [VAR8];






 
     VAR6 = 0;
   } else {
    assert(VAR7);
    assert(VAR8 > 0);
    assert(VAR6 <= VAR8);


     if (VAR6 >= VAR8) {
       const long VAR10 = 2 * VAR8;
 

      VAR9** const VAR11 = new VAR9* [VAR10];

      assert(VAR11);






 
       VAR9** VAR12 = VAR7;
       VAR9** const VAR13 = VAR12 + VAR6;

 VAR9** VAR14 = VAR11;

 while (VAR12 != VAR13)
 *VAR14++ = *VAR12++;

 delete[] VAR7;

      VAR7 = VAR11;
      VAR8 = VAR10;
 }
 }

 if (VAR2 == 0x20) 
 return FUN2(VAR3, VAR4, VAR5);
 else 
 return FUN3(VAR3, VAR4);
}
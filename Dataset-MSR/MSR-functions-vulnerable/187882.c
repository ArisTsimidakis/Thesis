void VAR1::FUN1(VAR2* VAR3, ptrdiff_t VAR4) {


   assert(VAR3);
   assert(VAR3->VAR5 < 0);
   assert(VAR4 >= VAR6);

 const long VAR7 = VAR6 + VAR8;

 long& VAR9 = VAR10;
  assert(VAR9 >= VAR7);


   if (VAR7 >= VAR9) {
     const long VAR11 = (VAR9 <= 0) ? 2048 : 2 * VAR9;
 

    VAR2** const VAR12 = new VAR2* [VAR11];






     VAR2** VAR13 = VAR12;
 
     VAR2** VAR14 = VAR15;
 VAR2** const VAR16 = VAR14 + VAR7;

 while (VAR14 != VAR16)
 *VAR13++ = *VAR14++;

 delete[] VAR15;

    VAR15 = VAR12;
    VAR9 = VAR11;
 }

  assert(VAR15);

 VAR2** const VAR14 = VAR15 + VAR4;

 VAR2** VAR13 = VAR15 + VAR7;
  assert(VAR13 >= VAR14);
  assert(VAR13 < (VAR15 + VAR9));

 while (VAR13 > VAR14) {
 VAR2** const VAR12 = VAR13 - 1;
    assert((*VAR12)->VAR5 < 0);

 *VAR13 = *VAR12;
    VAR13 = VAR12;
 }

 
   VAR15[VAR4] = VAR3;
   ++VAR8;


 }
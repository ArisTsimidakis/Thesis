static VAR1 FUN1(const  struct VAR2 *VAR3, int VAR4)

{

        u_int VAR5;



        VAR5 = 4;

        if (VAR3->VAR6 & VAR7) {

                

                VAR5 += (VAR3->VAR6 & VAR8) ? 8 : 4;

        }

        if (VAR3->VAR6 & VAR9) {

                

                VAR5 += (VAR3->VAR6 & VAR10) ? 14 : 10;



                

                if (VAR4)

                        VAR5 += 2;

	}

	return VAR5;

}
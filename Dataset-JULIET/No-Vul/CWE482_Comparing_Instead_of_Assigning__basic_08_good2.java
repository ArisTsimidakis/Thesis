class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                int VAR2 = (new FUN3()).nextInt(2);
                boolean VAR3 = false;
                if((VAR3 = (VAR2 == 0)) == true) 
                {
                    VAR4.writeLine("");
                }
                VAR4.writeLine("" + VAR3);
            }
        }
};
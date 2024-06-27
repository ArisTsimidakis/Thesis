class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                int VAR3 = (new FUN3()).nextInt(2);
                boolean VAR4 = false;
                if((VAR4 = (VAR3 == 0)) == true) 
                {
                    VAR2.writeLine("");
                }
                VAR2.writeLine("" + VAR4);
            }
        }
};
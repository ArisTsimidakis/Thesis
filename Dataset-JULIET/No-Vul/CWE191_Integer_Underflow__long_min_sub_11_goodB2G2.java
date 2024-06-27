class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = VAR4.VAR5;
            }
            else
            {
                
                VAR2 = 0L;
            }
    
            if (VAR3.FUN2())
            {
                
                if (VAR2 > VAR4.VAR5)
                {
                    long VAR6 = (long)(VAR2 - 1);
                    VAR3.writeLine("" + VAR6);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            byte VAR2;
            if (FUN2())
            {
                
                VAR2 = VAR3.VAR4;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                
                if (VAR2 < VAR3.VAR4)
                {
                    VAR2++;
                    byte VAR5 = (byte)(VAR2);
                    VAR6.writeLine("" + VAR5);
                }
                else
                {
                    VAR6.writeLine("");
                }
            }
        }
};
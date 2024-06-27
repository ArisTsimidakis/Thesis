class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3 != 5)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                try
                {
                    throw new FUN2();
                }
                catch (UnsupportedOperationException VAR4)
                {
                    VAR2.writeLine(""); 
                }
    
            }
        }
};
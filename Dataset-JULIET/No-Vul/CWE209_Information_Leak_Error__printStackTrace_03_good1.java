class VAR1{
    private void FUN1() throws Throwable
        {
            if (5 != 5)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                try
                {
                    throw new FUN2();
                }
                catch (UnsupportedOperationException VAR3)
                {
                    VAR2.writeLine(""); 
                }
    
            }
        }
};
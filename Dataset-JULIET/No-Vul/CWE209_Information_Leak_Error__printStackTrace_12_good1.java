class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                try
                {
                    throw new FUN3();
                }
                catch (UnsupportedOperationException VAR3)
                {
                    VAR2.writeLine(""); 
                }
            }
            else
            {
    
                try
                {
                    throw new FUN3();
                }
                catch (UnsupportedOperationException VAR3)
                {
                    VAR2.writeLine(""); 
                }
    
            }
        }
};
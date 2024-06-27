class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                try
                {
                    throw new FUN3();
                }
                catch(IllegalArgumentException VAR3)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    if(true)
                    {
                        return; 
                    }
                    
                    
                }
            }
            else
            {
    
                try
                {
                    throw new FUN3();
                }
                catch(IllegalArgumentException VAR3)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    
                    VAR2.writeLine("");
                }
    
            }
        }
};
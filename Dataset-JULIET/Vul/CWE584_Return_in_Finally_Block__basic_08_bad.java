class VAR1{
    public void FUN1() throws Throwable
        {
            if (FUN2())
            {
                try
                {
                    throw new FUN3();
                }
                catch(IllegalArgumentException VAR2)
                {
                    VAR3.writeLine("");
                }
                finally
                {
                    if(true)
                    {
                        return; 
                    }
                    
                    
                }
            }
        }
};
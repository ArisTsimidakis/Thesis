class VAR1{
    public void FUN1() throws Throwable
        {
            while(true)
            {
                try
                {
                    throw new FUN2();
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
                break;
            }
        }
};
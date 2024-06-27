class VAR1{
    private void FUN1() throws Throwable
        {
            if (5 == 5)
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
                    
                    VAR3.writeLine("");
                }
            }
        }
};
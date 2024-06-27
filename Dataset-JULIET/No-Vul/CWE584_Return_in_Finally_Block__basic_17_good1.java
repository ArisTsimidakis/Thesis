class VAR1{
    private void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                try
                {
                    throw new FUN2();
                }
                catch(IllegalArgumentException VAR3)
                {
                    VAR4.writeLine("");
                }
                finally
                {
                    
                    VAR4.writeLine("");
                }
            }
        }
};
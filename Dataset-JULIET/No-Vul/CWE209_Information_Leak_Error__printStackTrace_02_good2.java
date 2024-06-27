class VAR1{
    private void FUN1() throws Throwable
        {
            if (true)
            {
                try
                {
                    throw new FUN2();
                }
                catch (UnsupportedOperationException VAR2)
                {
                    VAR3.writeLine(""); 
                }
            }
        }
};
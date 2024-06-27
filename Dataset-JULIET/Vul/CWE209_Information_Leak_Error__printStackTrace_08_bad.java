class VAR1{
    public void FUN1() throws Throwable
        {
            if (FUN2())
            {
                try
                {
                    throw new FUN3();
                }
                catch (UnsupportedOperationException VAR2)
                {
                    VAR2.FUN4(); 
                }
            }
        }
};
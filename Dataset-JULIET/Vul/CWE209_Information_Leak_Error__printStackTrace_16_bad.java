class VAR1{
    public void FUN1() throws Throwable
        {
            while(true)
            {
                try
                {
                    throw new FUN2();
                }
                catch (UnsupportedOperationException VAR2)
                {
                    VAR2.FUN3(); 
                }
                break;
            }
        }
};
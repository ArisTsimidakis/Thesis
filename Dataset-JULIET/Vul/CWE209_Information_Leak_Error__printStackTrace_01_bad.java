class VAR1{
    public void FUN1() throws Throwable
        {
    
            try
            {
                throw new FUN2();
            }
            catch (UnsupportedOperationException VAR2)
            {
                VAR2.FUN3(); 
            }
    
        }
};
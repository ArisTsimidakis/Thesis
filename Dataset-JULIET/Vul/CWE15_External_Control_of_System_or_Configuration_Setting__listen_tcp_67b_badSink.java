class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            Connection VAR6 = null;
    
            try
            {
                VAR6 = VAR7.FUN2();
    
                
                VAR6.FUN3(VAR4);
            }
            catch (SQLException VAR8)
            {
                VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
            }
            finally
            {
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (SQLException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
            }
    
        }
};
class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            
    
            Connection VAR6 = null;
            try
            {
                VAR6 = VAR7.getConnection("", "", VAR4);
            }
            catch (SQLException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
    
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = (new FUN2()).FUN3();
    
            
    
            Connection VAR3 = null;
            try
            {
                VAR3 = VAR4.getConnection("", "", VAR2);
            }
            catch (SQLException VAR5)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
            }
            finally
            {
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (SQLException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
            }
    
        }
};
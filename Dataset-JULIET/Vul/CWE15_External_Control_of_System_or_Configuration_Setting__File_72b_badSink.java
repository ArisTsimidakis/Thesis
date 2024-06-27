class VAR1{
    public void FUN1(VAR2<String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.remove(2);
    
            Connection VAR5 = null;
    
            try
            {
                VAR5 = VAR6.FUN2();
    
                
                VAR5.FUN3(VAR4);
            }
            catch (SQLException VAR7)
            {
                VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
            }
            finally
            {
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
            }
    
        }
};
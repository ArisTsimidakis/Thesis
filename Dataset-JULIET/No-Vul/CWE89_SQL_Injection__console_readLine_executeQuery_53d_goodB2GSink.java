class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
    
            Connection VAR3 = null;
            PreparedStatement VAR4 = null;
            ResultSet VAR5 = null;
    
            try
            {
                
                VAR3 = VAR6.FUN2();
                VAR4 = VAR3.FUN3("");
                VAR4.FUN4(1, VAR2);
    
                VAR5 = VAR4.executeQuery();
    
                VAR6.writeLine(VAR5.FUN5()); 
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
    
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
            }
    
        }
};
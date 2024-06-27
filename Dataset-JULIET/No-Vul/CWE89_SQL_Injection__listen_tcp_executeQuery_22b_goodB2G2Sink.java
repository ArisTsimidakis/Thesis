class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                Connection VAR5 = null;
                PreparedStatement VAR6 = null;
                ResultSet VAR7 = null;
                try
                {
                    
                    VAR5 = VAR8.FUN2();
                    VAR6 = VAR5.FUN3("");
                    VAR6.FUN4(1, VAR2);
                    VAR7 = VAR6.executeQuery();
                    VAR8.writeLine(VAR7.FUN5()); 
                }
                catch (SQLException VAR9)
                {
                    VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                }
                finally
                {
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
        }
};
class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3)
            {
                
                VAR4.writeLine("");
            }
            else
            {
    
                Connection VAR5 = null;
                PreparedStatement VAR6 = null;
    
                try
                {
                    
                    VAR5 = VAR4.FUN2();
                    VAR6 = VAR5.FUN3("");
                    VAR6.FUN4(1, VAR2);
    
                    int VAR7 = VAR6.executeUpdate();
    
                    VAR4.writeLine("" + VAR7 + "");
                }
                catch (SQLException VAR8)
                {
                    VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR8)
                    {
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
    
            }
        }
};
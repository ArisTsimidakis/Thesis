class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                Connection VAR6 = null;
                PreparedStatement VAR7 = null;
    
                try
                {
                    
                    VAR6 = VAR3.FUN3();
                    VAR7 = VAR6.FUN4("");
                    VAR7.FUN5(1, VAR2);
    
                    int VAR8 = VAR7.executeUpdate();
    
                    VAR3.writeLine("" + VAR8 + "");
                }
                catch (SQLException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
    
            }
        }
};
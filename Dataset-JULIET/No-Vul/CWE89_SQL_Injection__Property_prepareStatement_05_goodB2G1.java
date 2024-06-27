class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            if (VAR3)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR4)
            {
                
                VAR5.writeLine("");
            }
            else
            {
    
                Connection VAR6 = null;
                PreparedStatement VAR7 = null;
    
                try
                {
                    
                    VAR6 = VAR5.FUN3();
                    VAR7 = VAR6.FUN4("");
                    VAR7.FUN5(1, VAR2);
    
                    Boolean VAR8 = VAR7.execute();
    
                    if (VAR8)
                    {
                        VAR5.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR5.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR9)
                {
                    VAR5.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR5.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR5.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
    
            }
        }
};
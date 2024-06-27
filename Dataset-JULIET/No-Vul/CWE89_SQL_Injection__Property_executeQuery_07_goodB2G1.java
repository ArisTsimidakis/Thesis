class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3!=5)
            {
                
                VAR4.writeLine("");
            }
            else
            {
    
                Connection VAR5 = null;
                PreparedStatement VAR6 = null;
                ResultSet VAR7 = null;
    
                try
                {
                    
                    VAR5 = VAR4.FUN3();
                    VAR6 = VAR5.FUN4("");
                    VAR6.FUN5(1, VAR2);
    
                    VAR7 = VAR6.executeQuery();
    
                    VAR4.writeLine(VAR7.FUN6()); 
                }
                catch (SQLException VAR8)
                {
                    VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
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
                    catch (SQLException VAR8)
                    {
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
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
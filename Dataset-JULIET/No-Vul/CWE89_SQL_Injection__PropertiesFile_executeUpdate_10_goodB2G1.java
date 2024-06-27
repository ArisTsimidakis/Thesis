class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR5 = new Properties();
                    FileInputStream VAR6 = null;
                    try
                    {
                        VAR6 = new FileInputStream("");
                        VAR5.FUN2(VAR6);
                        
                        VAR2 = VAR5.FUN3("");
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR11)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
    
                try
                {
                    
                    VAR12 = VAR3.FUN4();
                    VAR13 = VAR12.FUN5("");
                    VAR13.FUN6(1, VAR2);
    
                    int VAR14 = VAR13.executeUpdate();
    
                    VAR3.writeLine("" + VAR14 + "");
                }
                catch (SQLException VAR15)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
                }
                finally
                {
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
                }
    
            }
        }
};
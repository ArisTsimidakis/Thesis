class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Properties VAR3 = new Properties();
                FileInputStream VAR4 = null;
    
                try
                {
                    VAR4 = new FileInputStream("");
                    VAR3.FUN2(VAR4);
    
                    
                    VAR2 = VAR3.FUN3("");
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                Connection VAR11 = null;
                PreparedStatement VAR12 = null;
                ResultSet VAR13 = null;
                try
                {
                    
                    VAR11 = VAR6.FUN4();
                    VAR12 = VAR11.FUN5("");
                    VAR12.FUN6(1, VAR2);
                    VAR13 = VAR12.executeQuery();
                    VAR6.writeLine(VAR13.FUN7()); 
                }
                catch (SQLException VAR14)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
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
                    catch (SQLException VAR14)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                {
                    Connection VAR7 = null;
                    PreparedStatement VAR8 = null;
                    ResultSet VAR9 = null;
                    try
                    {
                        
                        VAR7 = VAR3.FUN2();
                        
                        VAR8 = VAR7.FUN3("");
                        VAR9 = VAR8.executeQuery();
                        
                        String VAR10 = VAR9.FUN4(1);
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR10.trim());
                            }
                            catch (NumberFormatException VAR11)
                            {
                                VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR16)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 2000)
                {
                    Thread.sleep(VAR2);
                }
    
            }
        }
};
class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = VAR4.VAR5; 
    
                
                {
                    Connection VAR6 = null;
                    PreparedStatement VAR7 = null;
                    ResultSet VAR8 = null;
    
                    try
                    {
                        
                        VAR6 = VAR9.FUN2();
    
                        
                        VAR7 = VAR6.FUN3("");
                        VAR8 = VAR7.executeQuery();
    
                        
                        String VAR10 = VAR8.FUN4(1);
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR3 = VAR4.parseInt(VAR10.trim());
                            }
                            catch (NumberFormatException VAR11)
                            {
                                VAR9.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
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
                            VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                
                int VAR16 = (int)(VAR3 * VAR3);
    
                VAR9.writeLine("" + VAR16);
    
            }
        }
};
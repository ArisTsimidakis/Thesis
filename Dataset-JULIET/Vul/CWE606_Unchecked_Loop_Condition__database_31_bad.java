class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
    
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
    
                        
                        VAR3 = VAR6.FUN4(1);
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                int VAR12;
                try
                {
                    VAR12 = VAR13.parseInt(VAR3);
                }
                catch (NumberFormatException VAR14)
                {
                    VAR7.writeLine("");
                    VAR12 = 1;
                }
    
                for (int VAR15=0; VAR15 < VAR12; VAR15++)
                {
                    
                    VAR7.writeLine("");
                }
    
            }
        }
};
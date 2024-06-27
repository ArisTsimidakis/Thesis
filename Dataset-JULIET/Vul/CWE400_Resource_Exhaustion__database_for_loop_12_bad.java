class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    Connection VAR6 = null;
                    PreparedStatement VAR7 = null;
                    ResultSet VAR8 = null;
                    try
                    {
                        
                        VAR6 = VAR3.FUN3();
                        
                        VAR7 = VAR6.FUN4("");
                        VAR8 = VAR7.executeQuery();
                        
                        String VAR9 = VAR8.FUN5(1);
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR9.trim());
                            }
                            catch (NumberFormatException VAR10)
                            {
                                VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (SQLException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if(VAR3.FUN2())
            {
                int VAR15 = 0;
                
                for (VAR15 = 0; VAR15 < VAR2; VAR15++)
                {
                    VAR3.writeLine("");
                }
            }
            else
            {
    
                int VAR15 = 0;
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    for (VAR15 = 0; VAR15 < VAR2; VAR15++)
                    {
                        VAR3.writeLine("");
                    }
                }
    
            }
        }
};
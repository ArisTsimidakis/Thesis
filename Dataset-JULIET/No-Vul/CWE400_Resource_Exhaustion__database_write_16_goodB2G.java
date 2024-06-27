class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            while (true)
            {
                VAR2 = VAR3.VAR4; 
                
                {
                    Connection VAR5 = null;
                    PreparedStatement VAR6 = null;
                    ResultSet VAR7 = null;
                    try
                    {
                        
                        VAR5 = VAR8.FUN2();
                        
                        VAR6 = VAR5.FUN3("");
                        VAR7 = VAR6.executeQuery();
                        
                        String VAR9 = VAR7.FUN4(1);
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR3.parseInt(VAR9.trim());
                            }
                            catch (NumberFormatException VAR10)
                            {
                                VAR8.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (SQLException VAR14)
                        {
                            VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
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
                            VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
                break;
            }
    
            while (true)
            {
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR15 = new File("");
                    FileOutputStream VAR16 = new FileOutputStream(VAR15);
                    OutputStreamWriter VAR17 = new FUN5(VAR16, "");
                    BufferedWriter VAR18 = new BufferedWriter(VAR17);
                    int VAR19;
                    for (VAR19 = 0; VAR19 < VAR2; VAR19++)
                    {
                        try
                        {
                            VAR18.write("");
                        }
                        catch (IOException VAR20)
                        {
                            VAR8.VAR11.log(VAR12.VAR13, "", VAR20);
                        }
                    }
                    
                    try
                    {
                        if (VAR18 != null)
                        {
                            VAR18.close();
                        }
                    }
                    catch (IOException VAR20)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR20);
                    }
                    try
                    {
                        if (VAR17 != null)
                        {
                            VAR17.close();
                        }
                    }
                    catch (IOException VAR20)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR20);
                    }
                    try
                    {
                        if (VAR16 != null)
                        {
                            VAR16.close();
                        }
                    }
                    catch (IOException VAR20)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR20);
                    }
                }
                break;
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
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
    
            for (int VAR15 = 0; VAR15 < 1; VAR15++)
            {
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR16 = new File("");
                    FileOutputStream VAR17 = new FileOutputStream(VAR16);
                    OutputStreamWriter VAR18 = new FUN5(VAR17, "");
                    BufferedWriter VAR19 = new BufferedWriter(VAR18);
                    int VAR20;
                    for (VAR20 = 0; VAR20 < VAR2; VAR20++)
                    {
                        try
                        {
                            VAR19.write("");
                        }
                        catch (IOException VAR21)
                        {
                            VAR8.VAR11.log(VAR12.VAR13, "", VAR21);
                        }
                    }
                    
                    try
                    {
                        if (VAR19 != null)
                        {
                            VAR19.close();
                        }
                    }
                    catch (IOException VAR21)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR21);
                    }
                    try
                    {
                        if (VAR18 != null)
                        {
                            VAR18.close();
                        }
                    }
                    catch (IOException VAR21)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR21);
                    }
                    try
                    {
                        if (VAR17 != null)
                        {
                            VAR17.close();
                        }
                    }
                    catch (IOException VAR21)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR21);
                    }
                }
            }
        }
};
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
                File VAR15 = new File("");
                FileOutputStream VAR16 = new FileOutputStream(VAR15);
                OutputStreamWriter VAR17 = new FUN6(VAR16, "");
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
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
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
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
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
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
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
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
                }
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR15 = new File("");
                    FileOutputStream VAR16 = new FileOutputStream(VAR15);
                    OutputStreamWriter VAR17 = new FUN6(VAR16, "");
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
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
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
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
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
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
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
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR20);
                    }
                }
    
            }
        }
};
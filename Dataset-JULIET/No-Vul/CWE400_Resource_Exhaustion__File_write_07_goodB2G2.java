class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3==5)
            {
                VAR2 = VAR4.VAR5; 
                {
                    File VAR6 = new File("");
                    FileInputStream VAR7 = null;
                    InputStreamReader VAR8 = null;
                    BufferedReader VAR9 = null;
                    try
                    {
                        
                        VAR7 = new FileInputStream(VAR6);
                        VAR8 = new InputStreamReader(VAR7, "");
                        VAR9 = new BufferedReader(VAR8);
                        
                        
                        String VAR10 = VAR9.readLine();
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR10.trim());
                            }
                            catch(NumberFormatException VAR11)
                            {
                                VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                            }
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
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
                        catch (IOException VAR16)
                        {
                            VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3==5)
            {
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR6 = new File("");
                    FileOutputStream VAR17 = new FileOutputStream(VAR6);
                    OutputStreamWriter VAR18 = new FUN2(VAR17, "");
                    BufferedWriter VAR19 = new BufferedWriter(VAR18);
                    int VAR20;
                    for (VAR20 = 0; VAR20 < VAR2; VAR20++)
                    {
                        try
                        {
                            VAR19.write("");
                        }
                        catch (IOException VAR16)
                        {
                            VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
                    }
                    
                    try
                    {
                        if (VAR19 != null)
                        {
                            VAR19.close();
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                    }
                    try
                    {
                        if (VAR18 != null)
                        {
                            VAR18.close();
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                    }
                    try
                    {
                        if (VAR17 != null)
                        {
                            VAR17.close();
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                    }
                }
            }
        }
};
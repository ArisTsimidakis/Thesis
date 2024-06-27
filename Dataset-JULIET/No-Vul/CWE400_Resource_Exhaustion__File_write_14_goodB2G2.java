class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = VAR5.VAR6; 
                {
                    File VAR7 = new File("");
                    FileInputStream VAR8 = null;
                    InputStreamReader VAR9 = null;
                    BufferedReader VAR10 = null;
                    try
                    {
                        
                        VAR8 = new FileInputStream(VAR7);
                        VAR9 = new InputStreamReader(VAR8, "");
                        VAR10 = new BufferedReader(VAR9);
                        
                        
                        String VAR11 = VAR10.readLine();
                        if (VAR11 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR11.trim());
                            }
                            catch(NumberFormatException VAR12)
                            {
                                VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                            }
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR10 != null)
                            {
                                VAR10.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
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
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4==5)
            {
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR7 = new File("");
                    FileOutputStream VAR17 = new FileOutputStream(VAR7);
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
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
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
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
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
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
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
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                    }
                }
            }
        }
};
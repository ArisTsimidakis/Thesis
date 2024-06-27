class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                {
                    InputStreamReader VAR7 = null;
                    BufferedReader VAR8 = null;
                    
                    try
                    {
                        VAR7 = new InputStreamReader(System.in, "");
                        VAR8 = new BufferedReader(VAR7);
                        
                        String VAR9 = VAR8.readLine();
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR9.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR14)
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
                        catch (IOException VAR14)
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
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR15)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR16 = new File("");
                    FileOutputStream VAR17 = new FileOutputStream(VAR16);
                    OutputStreamWriter VAR18 = new FUN2(VAR17, "");
                    BufferedWriter VAR19 = new BufferedWriter(VAR18);
                    int VAR20;
                    for (VAR20 = 0; VAR20 < VAR2; VAR20++)
                    {
                        try
                        {
                            VAR19.write("");
                        }
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                    
                    try
                    {
                        if (VAR19 != null)
                        {
                            VAR19.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                    try
                    {
                        if (VAR18 != null)
                        {
                            VAR18.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                    try
                    {
                        if (VAR17 != null)
                        {
                            VAR17.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                }
    
            }
        }
};
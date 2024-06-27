class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            {
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    String VAR7 = VAR6.readLine();
                    if (VAR7 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.parseInt(VAR7.trim());
                        }
                        catch(NumberFormatException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR13)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
            
    
            for (int VAR14 = 0; VAR14 < 1; VAR14++)
            {
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR15 = new File("");
                    FileOutputStream VAR16 = new FileOutputStream(VAR15);
                    OutputStreamWriter VAR17 = new FUN2(VAR16, "");
                    BufferedWriter VAR18 = new BufferedWriter(VAR17);
                    int VAR19;
                    for (VAR19 = 0; VAR19 < VAR2; VAR19++)
                    {
                        try
                        {
                            VAR18.write("");
                        }
                        catch (IOException VAR13)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
                    }
                    
                    try
                    {
                        if (VAR18 != null)
                        {
                            VAR18.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                    try
                    {
                        if (VAR17 != null)
                        {
                            VAR17.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                    try
                    {
                        if (VAR16 != null)
                        {
                            VAR16.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
        }
};
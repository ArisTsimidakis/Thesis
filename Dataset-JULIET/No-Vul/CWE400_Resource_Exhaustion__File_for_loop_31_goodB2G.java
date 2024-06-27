class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = VAR4.VAR5; 
    
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
                                VAR3 = VAR4.parseInt(VAR10.trim());
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
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                int VAR17 = 0;
    
                
                if (VAR3 > 0 && VAR3 <= 20)
                {
                    for (VAR17 = 0; VAR17 < VAR3; VAR17++)
                    {
                        VAR12.writeLine("");
                    }
                }
    
            }
        }
};
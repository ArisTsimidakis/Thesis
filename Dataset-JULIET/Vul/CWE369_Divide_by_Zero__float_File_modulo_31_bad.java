class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            {
                float VAR3;
    
                VAR3 = -1.0f; 
                {
                    File VAR4 = new File("");
                    FileInputStream VAR5 = null;
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
    
                    try
                    {
                        
                        VAR5 = new FileInputStream(VAR4);
                        VAR6 = new InputStreamReader(VAR5, "");
                        VAR7 = new BufferedReader(VAR6);
    
                        
                        
                        String VAR8 = VAR7.readLine();
                        if (VAR8 != null)
                        {
                            try
                            {
                                VAR3 = VAR9.FUN2(VAR8.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
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
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                float VAR3 = VAR2;
    
                
                int VAR16 = (int)(100.0 % VAR3);
                VAR11.writeLine(VAR16);
    
            }
        }
};
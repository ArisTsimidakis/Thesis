class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = -1.0f; 
                InputStreamReader VAR4 = null;
                BufferedReader VAR5 = null;
                
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR5 = new BufferedReader(VAR4);
                    
                    String VAR6 = VAR5.readLine();
                    if (VAR6 != null) 
                    {
                        try
                        {
                            VAR2 = VAR7.FUN3(VAR6.trim());
                        }
                        catch (NumberFormatException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
            }
            else
            {
    
                VAR2 = -1.0f; 
    
                InputStreamReader VAR4 = null;
                BufferedReader VAR5 = null;
    
                
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR5 = new BufferedReader(VAR4);
    
                    
                    String VAR6 = VAR5.readLine();
    
                    if (VAR6 != null) 
                    {
                        try
                        {
                            VAR2 = VAR7.FUN3(VAR6.trim());
                        }
                        catch (NumberFormatException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
    
            }
    
            if(VAR3.FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR13 = (int)(100.0 % VAR2);
                    VAR3.writeLine(VAR13);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR13 = (int)(100.0 % VAR2);
                    VAR3.writeLine(VAR13);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};
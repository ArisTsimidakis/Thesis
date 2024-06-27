class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3)
            {
                VAR2 = -1.0f; 
                
                {
                    URLConnection VAR4 = (new FUN2("VAR5:
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        VAR7 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        
                        String VAR8 = VAR6.readLine();
                        if (VAR8 != null)
                        {
                            try
                            {
                                VAR2 = VAR9.FUN3(VAR8.trim());
                            }
                            catch (NumberFormatException VAR10)
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
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR16)
            {
                
                VAR11.writeLine("");
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR17 = (int)(100.0 % VAR2);
                    VAR11.writeLine(VAR17);
                }
                else
                {
                    VAR11.writeLine("");
                }
    
            }
        }
};
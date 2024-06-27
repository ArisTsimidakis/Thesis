class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            {
                float VAR3;
    
                VAR3 = -1.0f; 
    
                
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
                                VAR3 = VAR9.FUN3(VAR8.trim());
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
    
                VAR2 = VAR3;
            }
            {
                float VAR3 = VAR2;
    
                
                int VAR16 = (int)(100.0 % VAR3);
                VAR11.writeLine(VAR16);
    
            }
        }
};
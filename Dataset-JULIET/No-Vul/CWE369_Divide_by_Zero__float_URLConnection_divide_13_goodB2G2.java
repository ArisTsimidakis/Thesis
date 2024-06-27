class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = -1.0f; 
                
                {
                    URLConnection VAR5 = (new FUN2("VAR6:
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    try
                    {
                        VAR8 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        
                        String VAR9 = VAR7.readLine();
                        if (VAR9 != null)
                        {
                            try
                            {
                                VAR2 = VAR10.FUN3(VAR9.trim());
                            }
                            catch (NumberFormatException VAR11)
                            {
                                VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
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
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3.VAR4==5)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR16 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR16);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = -1.0f; 
                
                {
                    URLConnection VAR4 = (new FUN3("VAR5:
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
                                VAR2 = VAR9.FUN4(VAR8.trim());
                            }
                            catch (NumberFormatException VAR10)
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
                            if (VAR6 != null)
                            {
                                VAR6.close();
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
                
                VAR2 = 0.0f;
            }
    
            if (VAR3.FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR15 = (int)(100.0 % VAR2);
                    VAR3.writeLine(VAR15);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};
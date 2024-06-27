class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            
            {
                URLConnection VAR3 = (new FUN2("VAR4:
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR5 = new BufferedReader(VAR6);
    
                    
                    
                    String VAR7 = VAR5.readLine();
                    if (VAR7 != null)
                    {
                        try
                        {
                            VAR2 = VAR8.FUN3(VAR7.trim());
                        }
                        catch (NumberFormatException VAR9)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                        }
                    }
                }
                catch (IOException VAR14)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                }
            }
    
            
            if (Math.abs(VAR2) > 0.000001)
            {
                int VAR15 = (int)(100.0 % VAR2);
                VAR10.writeLine(VAR15);
            }
            else
            {
                VAR10.writeLine("");
            }
    
        }
};
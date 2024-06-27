class VAR1{
    public void FUN1() throws Throwable
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
    
            VAR15 = VAR2;
            FUN4();
        }
};
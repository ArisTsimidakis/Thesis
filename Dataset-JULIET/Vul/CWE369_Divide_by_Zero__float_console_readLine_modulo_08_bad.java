class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            if (FUN2())
            {
                VAR2 = -1.0f; 
                InputStreamReader VAR3 = null;
                BufferedReader VAR4 = null;
                
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR3);
                    
                    String VAR5 = VAR4.readLine();
                    if (VAR5 != null) 
                    {
                        try
                        {
                            VAR2 = VAR6.FUN3(VAR5.trim());
                        }
                        catch (NumberFormatException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
                catch (IOException VAR12)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (FUN2())
            {
                
                int VAR13 = (int)(100.0 % VAR2);
                VAR8.writeLine(VAR13);
            }
        }
};
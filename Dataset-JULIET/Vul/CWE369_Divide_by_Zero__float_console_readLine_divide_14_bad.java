class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = -1.0f; 
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
                
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR6 = new BufferedReader(VAR5);
                    
                    String VAR7 = VAR6.readLine();
                    if (VAR7 != null) 
                    {
                        try
                        {
                            VAR2 = VAR8.FUN2(VAR7.trim());
                        }
                        catch (NumberFormatException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
                catch (IOException VAR13)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
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
                    catch (IOException VAR13)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3.VAR4==5)
            {
                
                int VAR14 = (int)(100.0 / VAR2);
                VAR3.writeLine(VAR14);
            }
        }
};
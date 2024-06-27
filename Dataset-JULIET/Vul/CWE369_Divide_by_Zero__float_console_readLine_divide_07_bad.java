class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3==5)
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
                            VAR2 = VAR7.FUN2(VAR6.trim());
                        }
                        catch (NumberFormatException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR13)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3==5)
            {
                
                int VAR14 = (int)(100.0 / VAR2);
                VAR9.writeLine(VAR14);
            }
        }
};
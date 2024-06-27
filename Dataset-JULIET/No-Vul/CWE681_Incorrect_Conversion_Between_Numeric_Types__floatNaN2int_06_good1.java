class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 != 5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
    
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR5);
                    VAR3.writeString("");
                    float VAR6 = 0;
                    try
                    {
                        VAR6 = VAR7.FUN2(VAR4.readLine());
                    }
                    catch (NumberFormatException VAR8)
                    {
                        VAR3.writeLine("");
                    }
    
                    
                    if (VAR6 < 0)
                    {
                        VAR3.writeLine("");
                    }
                    else
                    {
                        VAR3.writeLine("" + (int)(Math.sqrt(VAR6)));
                    }
                }
                catch (IOException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
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
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
    
            }
        }
};
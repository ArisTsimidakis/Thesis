class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    float VAR5 = 0;
                    VAR2.writeString("");
                    try
                    {
                        VAR5 = VAR6.FUN3(VAR3.readLine());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR2.writeLine("");
                    }
                    
                    if (VAR5 > VAR8.VAR9 || VAR5 < VAR8.VAR10)
                    {
                        VAR2.writeLine("");
                    }
                    else
                    {
                        VAR2.writeLine("" + (int)VAR5);
                    }
                }
                catch (IOException VAR11)
                {
                    VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                }
            }
            else
            {
    
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
    
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    float VAR5 = 0;
    
                    VAR2.writeString("");
    
                    try
                    {
                        VAR5 = VAR6.FUN3(VAR3.readLine());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR2.writeLine("");
                    }
    
                    
                    if (VAR5 > VAR8.VAR9 || VAR5 < VAR8.VAR10)
                    {
                        VAR2.writeLine("");
                    }
                    else
                    {
                        VAR2.writeLine("" + (int)VAR5);
                    }
                }
                catch (IOException VAR11)
                {
                    VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                }
    
            }
        }
};
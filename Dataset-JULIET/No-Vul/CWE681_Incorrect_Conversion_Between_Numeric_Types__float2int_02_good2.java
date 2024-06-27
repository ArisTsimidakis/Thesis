class VAR1{
    private void FUN1() throws Throwable
        {
            if (true)
            {
                BufferedReader VAR2 = null;
                InputStreamReader VAR3 = null;
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR2 = new BufferedReader(VAR3);
                    float VAR4 = 0;
                    VAR5.writeString("");
                    try
                    {
                        VAR4 = VAR6.FUN2(VAR2.readLine());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR5.writeLine("");
                    }
                    
                    if (VAR4 > VAR8.VAR9 || VAR4 < VAR8.VAR10)
                    {
                        VAR5.writeLine("");
                    }
                    else
                    {
                        VAR5.writeLine("" + (int)VAR4);
                    }
                }
                catch (IOException VAR11)
                {
                    VAR5.VAR12.log(VAR13.VAR14, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR5.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR5.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                }
            }
        }
};
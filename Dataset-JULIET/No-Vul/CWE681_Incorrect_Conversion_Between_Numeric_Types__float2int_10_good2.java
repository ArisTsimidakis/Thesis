class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR5);
                    float VAR6 = 0;
                    VAR2.writeString("");
                    try
                    {
                        VAR6 = VAR7.FUN2(VAR4.readLine());
                    }
                    catch (NumberFormatException VAR8)
                    {
                        VAR2.writeLine("");
                    }
                    
                    if (VAR6 > VAR9.VAR10 || VAR6 < VAR9.VAR11)
                    {
                        VAR2.writeLine("");
                    }
                    else
                    {
                        VAR2.writeLine("" + (int)VAR6);
                    }
                }
                catch (IOException VAR12)
                {
                    VAR2.VAR13.log(VAR14.VAR15, "", VAR12);
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
                        VAR2.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR2.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
                }
            }
        }
};
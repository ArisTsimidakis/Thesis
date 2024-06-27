class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    VAR5.writeString("");
                    float VAR6 = 0;
                    try
                    {
                        VAR6 = VAR7.FUN2(VAR3.readLine());
                    }
                    catch (NumberFormatException VAR8)
                    {
                        VAR5.writeLine("");
                    }
                    
                    if (VAR6 < 0)
                    {
                        VAR5.writeLine("");
                    }
                    else
                    {
                        VAR5.writeLine("" + (int)(Math.sqrt(VAR6)));
                    }
                }
                catch (IOException VAR9)
                {
                    VAR5.VAR10.log(VAR11.VAR12, "", VAR9);
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
                    catch (IOException VAR9)
                    {
                        VAR5.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR5.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
        }
};
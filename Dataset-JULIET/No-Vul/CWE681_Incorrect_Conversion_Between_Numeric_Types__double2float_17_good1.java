class VAR1{
    private void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    double VAR5 = 0;
                    VAR6.writeString("");
                    try
                    {
                        VAR5 = VAR7.parseDouble(VAR3.readLine());
                    }
                    catch (NumberFormatException VAR8)
                    {
                        VAR6.writeLine("");
                    }
                    
                    if (VAR5 > VAR9.VAR10 || VAR5 < VAR9.VAR11)
                    {
                        VAR6.writeLine("");
                        return;
                    }
                    VAR6.writeLine("" + (float)VAR5);
                }
                catch (IOException VAR12)
                {
                    VAR6.VAR13.log(VAR14.VAR15, "", VAR12);
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
                    catch (IOException VAR12)
                    {
                        VAR6.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR6.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
                }
            }
        }
};
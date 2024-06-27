class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
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
                    
                    VAR2.writeLine("" + (int)VAR6);
                }
                catch (IOException VAR9)
                {
                    VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
        }
};
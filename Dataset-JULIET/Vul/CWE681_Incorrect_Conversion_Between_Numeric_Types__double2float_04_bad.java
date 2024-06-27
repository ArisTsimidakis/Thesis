class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2)
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
                    
                    VAR6.writeLine("" + (float)VAR5);
                }
                catch (IOException VAR9)
                {
                    VAR6.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR6.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR6.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
        }
};
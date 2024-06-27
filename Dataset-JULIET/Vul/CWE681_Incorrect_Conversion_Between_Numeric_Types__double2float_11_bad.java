class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    double VAR5 = 0;
                    VAR2.writeString("");
                    try
                    {
                        VAR5 = VAR6.parseDouble(VAR3.readLine());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR2.writeLine("");
                    }
                    
                    VAR2.writeLine("" + (float)VAR5);
                }
                catch (IOException VAR8)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
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
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};
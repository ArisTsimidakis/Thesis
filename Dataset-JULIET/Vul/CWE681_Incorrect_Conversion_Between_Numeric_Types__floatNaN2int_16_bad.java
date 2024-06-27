class VAR1{
    public void FUN1() throws Throwable
        {
            while(true)
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
                    
                    VAR5.writeLine("" + (int)(Math.sqrt(VAR4)));
                }
                catch (IOException VAR8)
                {
                    VAR5.VAR9.log(VAR10.VAR11, "", VAR8);
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
                    catch (IOException VAR8)
                    {
                        VAR5.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR5.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
                break;
            }
        }
};
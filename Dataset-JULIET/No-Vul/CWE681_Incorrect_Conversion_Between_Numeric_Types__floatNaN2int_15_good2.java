class VAR1{
    private void FUN1() throws Throwable
        {
            switch (7)
            {
            case 7:
                BufferedReader VAR2 = null;
                InputStreamReader VAR3 = null;
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR2 = new BufferedReader(VAR3);
                    VAR4.writeString("");
                    float VAR5 = 0;
                    try
                    {
                        VAR5 = VAR6.FUN2(VAR2.readLine());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR4.writeLine("");
                    }
                    
                    if (VAR5 < 0)
                    {
                        VAR4.writeLine("");
                    }
                    else
                    {
                        VAR4.writeLine("" + (int)(Math.sqrt(VAR5)));
                    }
                }
                catch (IOException VAR8)
                {
                    VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
                break;
            default:
                
                VAR4.writeLine("");
                break;
            }
        }
};